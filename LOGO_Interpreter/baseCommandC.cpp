/*
 *  baseCommand.cpp
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "baseCommandC.h"
#include <iostream>

baseCommandC::baseCommandC(float v){
	value=v;
}

baseCommandC::baseCommandC(){
	value=1.0;
}

baseCommandC::~baseCommandC(){
	std::cout << "Out of Scope, value: " << value << std::endl;
	
}

std::istream& operator>> (std::istream& in, baseCommandC& a){
    
	in >> std::ws >> a.value;
	
	return in;
    
}