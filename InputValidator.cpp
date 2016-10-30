#include "InputValidator.h"

/***********************************************************************
NAME:
bool validateInput(int & a_input)

SYNOPSIS:
bool validateInput(int & a_input) -> validates input as int

a_input -> input to act on

DESCRIPTION:
This function will provide a nice clean method of checking entries as integers.
RETURNS:
Returns a boolean, true if integer was input, false otherwise

AUTHOR:
Devinder Sodhi
SOURCES:
my own code from Canoga ++ project in 2015
DATE:
11:09 9/16/2016

***************************************************************************/

bool validateInput(int & a_input)
{
	//a failure of the stream is checkable with this means.
	if (!(std::cin >> a_input)) {
		std::cerr << "Please Enter a valid Integer" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return false;
	}
	return true;
}

/* 	bool validateInput(int & a_input) */

bool validateInput(double & a_input)
{
	//a failure of the stream is checkable with this means.
	if (!(std::cin >> a_input)) {
		std::cerr << "Please Enter a valid Double" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return false;
	}
	return true;
}


bool validateInput(std::string & a_input)
{
	//a failure of the stream is checkable with this means.
	if (!(std::cin >> a_input)) {
		std::cerr << "Please Enter a valid String" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return false;
	}
	return true;
}


void confirmOverZero(int & a_inputNum, std::string a_whatToSay)
{
	do
	{
		do
		{
			std::cout << a_whatToSay << std::endl;
		} while (!validateInput(a_inputNum));

	} while (a_inputNum <= 0);
}

void confirmOverZero(double & a_inputNum, std::string a_whatToSay)
{
	do
	{
		do
		{
			std::cout << a_whatToSay << std::endl;
		} while (!validateInput(a_inputNum));

	} while (a_inputNum <= 0);
}



void confirmOverZero(std::string & a_inputNum, std::string a_whatToSay)
{
	do
	{
		do
		{
			std::cout << a_whatToSay << std::endl;
		} while (!validateInput(a_inputNum));

	} while (!std::all_of(a_inputNum.begin(), a_inputNum.end(), isalpha));
}