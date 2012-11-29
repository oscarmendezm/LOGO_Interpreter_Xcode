/*
 *  baseCommand.h
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
	
protected:
	float value;
	
public:
	//Constructors
	baseCommandC(float v);	//Assign Value
	baseCommandC();			//Default constructor, sets value=1
	
	//Destructor
	~baseCommandC();			//Does nothing but print value
	
	//Input operator
	friend std::istream& operator>> (std::istream& in, baseCommandC& a);		// Allows input operator to assign value (to value :/)
};



#endif /* defined(__LOGO_Interpreter__baseCommandC__) */
