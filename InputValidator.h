#pragma once

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>


bool validateInput(int & a_input);
bool validateInput(double & a_input);
bool validateInput(std::string & a_input);


void confirmOverZero(int & a_inputNum, std::string a_whatToSay);
void confirmOverZero(double & a_inputNum, std::string a_whatToSay);
void confirmOverZero(std::string & a_inputNum, std::string a_whatToSay);

