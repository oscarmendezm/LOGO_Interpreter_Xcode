//
//  forwardC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 guapOscar Enterprises. All rights reserved.
//

#include "forwardC.h"
#include <iostream>
//#include <GL/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header

forwardC::forwardC(float v):baseCommandC(v)
{
    
}

forwardC::forwardC():baseCommandC()
{
    
}


void forwardC::draw(){
    
	//std::cout << value << std::endl;
    
	glBegin(GL_LINE_LOOP);
    glVertex3f( 0.0f, 0.0f, 0.0f);                     // Top
    glVertex3f(value,0.0f, 0.0f);                     // Bottom Left
	glEnd();
    
	glTranslatef(value,0.0f,0.0f);
    
}
