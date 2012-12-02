//
//  main.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//
//it[0]->draw();


#include "baseCommandC.h"
#include "forwardC.h"
#include "jumpC.h"
#include "rotateC.h"
#include "window.h"
#include "progC.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>


using namespace std;
progC compilation;


int main (int argc, char ** argv)
{
   // compilation(argc,argv);
   
#ifdef __APPLE__
    argv[1]="./file3.txt";
#endif
    std::ifstream infile(argv[1]);
    infile >> compilation;
	window* w = window::Instance(argc,argv);
    w->Destroy();
    
    return 0;
}

void draw(void)
{
    compilation.draw();
}

