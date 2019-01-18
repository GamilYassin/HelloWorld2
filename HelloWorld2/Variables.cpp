

#include "pch.h"
#include "Variables.h"
#include <iostream>

void copyInitialization() {
	int x = 5;
	std::cout << "Here is Copy initialization result: " << x << std::endl;
}

void directInitialization() {
	int x (5);
	std::cout << "Here is Direct initialization result: " << x << std::endl;
}

void uniformInitialization() {
	int x{ 10 };
	std::cout << "Here is uniform initialization result: " << x << std::endl;
}

void uniformZeroInitialization() {
	int x{};
	std::cout << "Here is uniform empty initialization result: " << x << std::endl;
}

void printTypesSizes() {
	std::cout << "Size of bool:\t\t" << sizeof(bool) << std::endl;
	std::cout << "Size of char:\t\t" << sizeof(char) << std::endl;
	std::cout << "Size of char_16_t:\t\t" << sizeof(char16_t) << std::endl;
	std::cout << "Size of char_32_t:\t\t" << sizeof(char32_t) << std::endl;
	std::cout << "Size of short:\t\t" << sizeof(short) << std::endl;
	std::cout << "Size of int:\t\t" << sizeof(int) << std::endl;
	std::cout << "Size of long:\t\t" << sizeof(long) << std::endl;
	std::cout << "Size of float:\t\t" << sizeof(float) << std::endl;
	std::cout << "Size of double:\t\t" << sizeof(double) << std::endl;
}