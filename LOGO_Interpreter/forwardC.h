//
//  forwardC.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef __LOGO_Interpreter__forwardC__
#define __LOGO_Interpreter__forwardC__

#include <iostream>
#include "baseCommandC.h"

class forwardC : public baseCommandC{
    
public:
	forwardC(float v);
	forwardC();
	void draw();
    
};

#endif /* defined(__LOGO_Interpreter__forwardC__) */
