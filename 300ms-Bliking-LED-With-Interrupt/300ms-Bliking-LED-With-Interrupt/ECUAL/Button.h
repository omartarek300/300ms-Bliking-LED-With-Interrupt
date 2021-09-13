/*
 * Button.h
 *
 * Created: 9/6/2021 3:25:34 AM
 *  Author: Omar
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../MCAL/dio.h"

/****************************************************Functions Decleration****************************************/

/*******
	Function Description: this function initiates port and pin of the button
	parameter: port_name: is the port name 
			   pin_num: is an integer number specifies the pins of the buttons	   
	return: none
*/
void Button_init(uint8_t port_name,uint8_t pin_num);

/*******
	Function Description: this function reads the input of the button when pressed
	parameter: port_name: is the port name 
			   pin_num: is an integer number specifies which pin to read from
	return: none
*/
uint8_t Button_read(uint8_t port_name,uint8_t pin_num);




#endif /* BUTTON_H_ */
