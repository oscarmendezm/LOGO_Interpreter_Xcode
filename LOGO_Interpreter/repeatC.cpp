//
//  repeatC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#include "repeatC.h"
#include <iostream>
#include "progC.h"
repeatC::repeatC(std::ifstream& infile, float v):baseCommandC(v)
{
    loop = new progC(infile);
    //infile >> *loop;
}

repeatC::repeatC():baseCommandC()
{
    
}

repeatC::~repeatC(){
    delete [] (loop);
}

void repeatC::draw(){
    
	//std::cout << value << std::endl;
    
	//glRotatef(value, 0,0,1);
    for(int i=0;i<value;i++)
        loop->draw();
}