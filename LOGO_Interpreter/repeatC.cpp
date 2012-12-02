//
//  repeatC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#include "repeatC.h"
#include <iostream>

repeatC::repeatC(std::ifstream& infile, float v)
{
    infile >> loop;
    value=v;
}

repeatC::repeatC():baseCommandC()
{
    
}


void repeatC::draw(){
    
	//std::cout << value << std::endl;
    
	//glRotatef(value, 0,0,1);
    
    loop.draw();
}