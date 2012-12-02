//
//  rotateC.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef __LOGO_Interpreter__rotateC__
#define __LOGO_Interpreter__rotateC__

#include <iostream>
#include "baseCommandC.h"

class rotateC : public baseCommandC{
    
    
public:
	rotateC(float v);
	rotateC();
	void draw();
    
};

#endif /* defined(__LOGO_Interpreter__rotateC__) */
