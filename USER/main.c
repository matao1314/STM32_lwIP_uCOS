/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "sys.h"
#include "usart.h"		
#include "delay.h"	
//Extend api
#include "lcd.h"
#include "led.h"
#include "key.h"

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
  /* Infinite loop */
  while (1)
  {


	LCD_Clear(RED);
  }
}

