#ifndef __USART_H
#define __USART_H
#include <stm32f10x_map.h>
#include <stm32f10x_nvic.h> 
#include "stdio.h"	 

#define USART_REC_LEN  			200  	//�����������ֽ��� 200
#define EN_USART1_RX 			1		//ʹ�ܣ�1��/��ֹ��0������1����
	  	
extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		//����״̬���	
//����봮���жϽ��գ��벻Ҫע�����º궨��
void uart_init(u32 pclk2,u32 bound);
void USART1_SendData(u8 ds);
void USART1_SendPtr(u8 *ds,u16 len);
void USART1_ASC_Print(u8 *ds,u16 len);
#endif	   















