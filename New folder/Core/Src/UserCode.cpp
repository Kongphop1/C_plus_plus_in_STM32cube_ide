/*
 * UserCode.cpp
 *
 *  Created on: May 23, 2022
 *      Author: ASUS
 */

#include "main.h"

extern "C" void UserCodeSetup();			// extern "C" mean this function is work on C
extern "C" void UserCodeLoop();

void UserCodeSetup(){

}

void UserCodeLoop(){
	while(1){
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		HAL_Delay(500);
	}
}
