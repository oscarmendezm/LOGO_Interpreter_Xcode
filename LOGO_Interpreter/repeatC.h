//
//  repeatC.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef __LOGO_Interpreter__repeatC__
#define __LOGO_Interpreter__repeatC__


#include <iostream>
#include "baseCommandC.h"
//#include "progC.h"

class progC;

class repeatC : public baseCommandC{
private:
    progC* loop;
public:
	repeatC(std::ifstream& infile, float v);
	repeatC();
    ~repeatC();
	void draw();
    
   // friend std::istream& operator>> (std::istream& in, repeatC& a);
    
    
};
#endif /* defined(__LOGO_Interpreter__repeatC__) */
