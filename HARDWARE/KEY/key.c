//PB0 - key1
//PB1 - key2
#include "stm32f10x.h"

#include "key.h" 
#include "delay.h"	

 /*
 * 函数名：Key_GPIO_Config
 * 描述  ：配置按键用到的I/O口
 * 输入  ：无
 * 输出  ：无
 */
void KEY_init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

	/*开启按键端口（PB0）的时钟*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);

 	GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_0|GPIO_Pin_1; 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; 
	GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_IPU; 

	GPIO_Init(GPIOB, &GPIO_InitStructure);
}

 /*
 * 函数名：Key_Scan
 * 描述  ：检测是否有按键按下
 * 输入  ：GPIOx：x 可以是 A，B，C，D或者 E
 *		     GPIO_Pin：待读取的端口位 	
 * 输出  ：KEY_OFF(没按下按键)、KEY_ON（按下按键）
 */
u8 KEY_Scan(void)
{			
u8 KEY1,KEY2;
static u8 key_up=1;//按键按松开标志	
KEY1=GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0);
KEY2=GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1);
if(key_up&&(KEY1==0||KEY2==0))
{
delay_ms(10);//去抖动 
key_up=0;
if(KEY1==0)
{
return 1;
}
else if(KEY2==0)
{
return 2;
}
}
else 
if(KEY1==1&&KEY2==1)
key_up=1; 	    
return 0;// 无按键按下
}
