//
//  progC.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef __LOGO_Interpreter__progC__
#define __LOGO_Interpreter__progC__

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include "baseCommandC.h"
#include "forwardC.h"
#include "jumpC.h"
#include "rotateC.h"
#include "repeatC.h"

enum commandType_t { cmdForward, cmdJump, cmdLeft, cmdRight, cmdRepeat, cmdError};

//class repeatC;

class progC{
    
private:
    
	commandType_t checkCmdType(std::string cmdIn);
	bool contructNode(commandType_t cmdType, std::string input, std::ifstream& infile);
	bool parseInput(std::ifstream &infile);
    std::string getWord(std::ifstream &infile);
    std::string getStringStream(std::ifstream &infile);
	
    
public:
	std::vector<baseCommandC*> commands;
	progC();
	progC(std::ifstream& infile);
	
    
	~progC();
    
	friend std::istream& operator>> (std::ifstream& in, progC& a);
    
    void draw();
};

#endif /* defined(__LOGO_Interpreter__progC__) */
