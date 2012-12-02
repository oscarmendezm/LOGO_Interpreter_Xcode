
/*
 *  baseCommandC.h
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 guapOscar Enterprises. All rights reserved.
 *
 */

#ifndef __LOGO_Interpreter__baseCommandC__
#define __LOGO_Interpreter__baseCommandC__

#include <iostream>
#ifdef __APPLE__
    #include <GLUT/glut.h>
#else
    #include <GL/gl.h>     // The GL Header File
    #include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header

#endif

class baseCommandC{
    
protected:
	float value;
    
public:
    
	baseCommandC(float v);
	baseCommandC();
    
	~baseCommandC();
	
	virtual void draw()=0;
    
	friend std::istream& operator>> (std::istream& in, baseCommandC& a);
};

#endif /* defined(__LOGO_Interpreter__forwardC__) */
