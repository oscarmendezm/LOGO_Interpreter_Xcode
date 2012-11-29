
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

class baseCommandC{
	
private:
	float value;
	
public:
	
	baseCommandC(float v);
	baseCommandC();
	
	~baseCommandC();
	
	friend std::istream& operator>> (std::istream& in, baseCommandC& a);
};



#endif /* defined(__LOGO_Interpreter__baseCommandC__) */
