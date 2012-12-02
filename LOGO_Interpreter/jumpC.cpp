//
//  jumpC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#include "jumpC.h"
#include <iostream>
//#include <GL/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header

jumpC::jumpC(float v):baseCommandC(v)
{
    
}

jumpC::jumpC():baseCommandC()
{
    
}


void jumpC::draw(){
    
	//std::cout << value << std::endl;
    
	glTranslatef(value,0,0);
}
