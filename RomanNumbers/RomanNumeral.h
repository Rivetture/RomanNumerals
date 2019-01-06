#ifndef ROMAN_NUMERAL
#define ROMAN_NUMERAL

#include <string>

class RomanNumeral {
public:
	RomanNumeral(int userNumber);

	//Return number in Roman Number form
	std::string romanValue();

	//Return number in Arabic Number form
	std::string arabicValue();

private:
	int arabicNumeral;
	std::string romanNumber;

	//Convert entered integer into Roman Number
	void convert(int size);
};

#endif