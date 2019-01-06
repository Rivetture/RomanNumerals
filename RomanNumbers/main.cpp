// main.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>

#include "RomanNumeral.h"

int main()
{
	std::cout << "Enter a number 1-3999. (Enter 0 to quit)" << std::endl;
	while (true) {
		int arabicNumber;
		std::cin >> arabicNumber;

		//User quit program
		if (arabicNumber == 0) return 0;

		//Bounds Check, Input Range 1-3999
		if (arabicNumber < 1 || arabicNumber > 3999 || !std::cin) {
			std::cout << "Invalid, you must enter a number 1-3999. (Enter 0 to quit)" << std::endl;
			continue;
		}
		
		RomanNumeral x{arabicNumber};
		std::cout << x.romanValue() << std::endl;
	}

	return 0;
}

