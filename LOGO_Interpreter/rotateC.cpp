//
//  rotateC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#include "rotateC.h"
#include <iostream>
//#include <GL/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header

rotateC::rotateC(float v):baseCommandC(v)
{
    
}

rotateC::rotateC():baseCommandC()
{
    
}


void rotateC::draw(){
    
	//std::cout << value << std::endl;
    
	glRotatef(value, 0,0,1);
}