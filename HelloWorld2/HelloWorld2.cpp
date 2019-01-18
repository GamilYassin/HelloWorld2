
#include "pch.h"
#include "Variables.h"
#include <iostream>


int getInputs() 
{
	int x;
	std::cout << "Enter Age: " << std::endl;
	std::cin >> x;
	std::cout  << "You entered " << x;
	return x;
}

int getNum() 
{
	int x;
	std::cout << "Enter a number:";
	std::cin >> x;
	return x;
}

int addNums(int, int);


int main()
{
    // std::cout << "Hello World!\n"; 
	//std::cout << getInputs();
	copyInitialization();
	directInitialization();
	uniformZeroInitialization();
	uniformInitialization();
	printTypesSizes();
	return 0;
}

