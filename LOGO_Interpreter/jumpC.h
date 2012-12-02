//
//  jumpC.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef __LOGO_Interpreter__jumpC__
#define __LOGO_Interpreter__jumpC__


#include <iostream>
#include "baseCommandC.h"

class jumpC : public baseCommandC{
    
public:
	jumpC(float v);
	jumpC();
	void draw();
    
};

#endif /* defined(__LOGO_Interpreter__jumpC__) */
