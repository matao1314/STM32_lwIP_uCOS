/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "sys.h"
#include "usart.h"		
#include "delay.h"	
//Extend api
#include "lcd.h"
#include "led.h"
#include "key.h"
#include "enc28j60.h"	  

const u8 mymac[6]={0x04,0x02,0x35,0x00,0x00,0x01};	//MACµÿ÷∑

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
  /* Add your application code here
     */				 
	SystemInit();
	uart_init(72,9600);	 
	delay_init(72);	   	
	LED_Init();
	KEY_init();
  LCD_Init();
	LED1=ENC28J60_Init((u8*)mymac);
  /* Infinite loop */
  while (1)
  {


  }
}

