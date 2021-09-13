/*
 * Button.c
 *
 * Created: 9/6/2021 3:22:43 AM
 *  Author: Omar
 */ 
#include "Button.h"
void Button_init(uint8_t port_name,uint8_t pin_num)
{
	DIO_init(port_name, pin_num);
}
uint8_t Button_read(uint8_t port_name,uint8_t pin_num)
{
	return DIO_read(port_name,  pin_num);
}