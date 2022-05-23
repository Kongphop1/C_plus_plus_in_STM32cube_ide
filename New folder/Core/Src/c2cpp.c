/*
 * c2cpp.c
 *
 *  Created on: May 23, 2022
 *      Author: ASUS
 */

#include "c2cpp.h"

void UserCodeSetup();			// declare function first for having this function but no content inside because (go to another line)
void UserCodeLoop();			// 	(continue from up line) the content is in UserCode.cpp

void setup(){
	//Call c++ domain
	UserCodeSetup();
}

void loop(){
	//Call c++ domain
	UserCodeLoop();
}
