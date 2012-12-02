//
//  progC.cpp
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#include "progC.h"

progC::progC(){
    
    std::cerr<<"Program Initialized"<<std::endl;
    /*std::ifstream infile;
    infile.open("./file1.txt");
	parseInput(infile);
	infile.close();*/
    
}
progC::progC(std::ifstream& infile){
    

    //infile.open("file1");
	parseInput(infile);
    
}


progC::~progC(){
    for(std::vector<baseCommandC*>::const_iterator it(commands.begin()); it!=commands.end(); it++){
        delete (*it);
        std::cout<<"DELETING"<<std::endl;
    }
}

std::istream& operator>> (std::ifstream& in, progC& a){
        
       a.parseInput(in);
        
        return in;
        
}

void progC::draw(){
    for(std::vector<baseCommandC*>::const_iterator it(commands.begin()); it!=commands.end(); it++){
        (*it)->draw();
    }
}

commandType_t progC::checkCmdType(std::string cmdIn){
	commandType_t cmdType;
    
	if (!cmdIn.compare("FORWARD")){
		cmdType = cmdForward;
	}
	else if (!cmdIn.compare("JUMP")){
		cmdType = cmdJump;
	}
	else if (!cmdIn.compare("LEFT"))
		cmdType = cmdLeft;
	else if (!cmdIn.compare("RIGHT"))
		cmdType = cmdRight;
	else if (!cmdIn.compare("REPEAT"))
		cmdType = cmdRepeat;
	else
		cmdType = cmdError;
    
	return cmdType;
    
}

std::string progC::getWord(std::ifstream &infile){
    std::string word = "";
	char cmp;
    
    while(!infile.eof())
	{
		cmp = infile.get();
		if((cmp==' ')||(cmp=='\n')){
			return word;
		}
		word += cmp;
        
	}
}

bool progC::contructNode(commandType_t cmdType, std::string input, std::ifstream& infile)
{
	//bool retVal;
	float drawValue = 0;
	baseCommandC* command;
    
	switch (cmdType)
	{
		case cmdForward:
			drawValue = atof(input.c_str());
			command = new forwardC(drawValue);
            progC::commands.push_back(command);
            std::cout << "Construct Forward Node" <<  drawValue << std::endl;
			break;
            
		case cmdLeft:
			drawValue = atof(input.c_str());
			command = new rotateC(drawValue);
			commands.push_back(command);
			//TODO construct NODE
			std::cout << "Construct Left Node" <<  drawValue << std::endl;
			break;
            
		case cmdRight:
			drawValue = atof(input.c_str());
			drawValue = -drawValue;
			command = new rotateC(drawValue);
			commands.push_back(command);
			//TODO construct NODE
			std::cout << "Construct Right Node" <<  drawValue << std::endl;
			break;
            
		case cmdJump:
			drawValue = atof(input.c_str());
			command = new jumpC(drawValue);
			commands.push_back(command);
			//TODO construct NODE
			std::cout << "Construct Jump Node" <<  drawValue << std::endl;
			break;
            
		case cmdRepeat:
			drawValue = atoi(input.c_str());
			input=getWord(infile);
            command = new repeatC(infile, drawValue);
			//TODO construct NODE
			std::cout << "Construct Repeat Node: " <<  drawValue << input <<std::endl;
			break;
            
		default:
            std::cout << "ERROR" << std::endl;
            return 0;
            break;
            
	}
    return 0;
}

/*string parseWord(ifstream &infile)
 {
 string word;
 
 while(!infile.eof())
 {
 
 }*/



bool progC::parseInput(std::ifstream &infile)
{
    std::string input;
    std::string line;
	commandType_t cmdType;
    
	while(!infile.eof()) // To get you all the lines.
    {
		
		input=getWord(infile);
        if(!input.compare("]"))
            return 1;
		cmdType = checkCmdType(input);
		input=getWord(infile);
		contructNode(cmdType, input, infile);
    }
    return 1;
}

std::string getStringStream(std::ifstream& infile)
{
    std::string word = "";
    char cmp;
    
    while(!infile.eof())
    {
        cmp = infile.get();
        if(cmp==']'){
            return word;
        }
        if(cmp!='['){
            word += cmp;
        }
    }
}
