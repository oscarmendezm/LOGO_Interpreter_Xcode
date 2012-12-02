/*
 *  baseCommand.cpp
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 guapOscar Enterprises. All rights reserved.
 *
 */

#include "baseCommandC.h"
#include <iostream>

baseCommandC::baseCommandC(float v){
	value=v;
}

baseCommandC::baseCommandC(){
	value=0.0;
}

baseCommandC::~baseCommandC(){
    
}

std::istream& operator>> (std::istream& in, baseCommandC& a){
    
	in >> std::ws >> a.value;
    
	return in;
    
}