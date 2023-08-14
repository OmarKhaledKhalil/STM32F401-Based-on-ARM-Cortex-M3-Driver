/*************************************************************************************************/
/* Author : Omar Khaled                                                                          */
/* Version : V01                                                                                 */
/* Data   : 20-6-2023                                                                            */
/*************************************************************************************************/

#ifndef _RCC_PRIVATE_H
#define _RCC_PRIVATE_H

/*Register Defination*/

#define RCC_CR 	        *((volatile u32*)ox40021000)	
#define RCC_CFGR 	    *((volatile u32*)ox40021004)
#define RCC_CIR         *((volatile u32*)ox40021008)
#define RCC_APB2RSTR    *((volatile u32*)ox4002100C)	
#define RCC_APB1RSTS    *((volatile u32*)ox40021010)
#define RCC_AHBENR 	    *((volatile u32*)ox40021014)	
#define RCC_APB2ENR 	*((volatile u32*)ox40021018)
#define RCC_APB1ENR 	*((volatile u32*)ox4002101C)	
#define RCC_BDCR 	    *((volatile u32*)ox40021020)
#define RCC_CSR 	    *((volatile u32*)ox40021024)	
	

#endif