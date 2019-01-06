#include "stdafx.h"
#include "RomanNumeral.h"


	RomanNumeral::RomanNumeral(int userNumber)
		:arabicNumeral(userNumber)
	{
		//4 = Thounsands', 3 = Hundreds', 2 = Tens', 1 = Ones'
		int size = 0;

		if (arabicNumeral > 999) {
			size = 4;
		}
		else if (arabicNumeral > 99) {
			size = 3;
		}
		else if (arabicNumeral > 9) {
			size = 2;
		}
		else {
			size = 1;
		}
		convert(size);
	}

	std::string RomanNumeral::romanValue() {
		return romanNumber;
	}
	std::string RomanNumeral::arabicValue() {
		return std::to_string(arabicNumeral);
	}

	void RomanNumeral::convert(int size) {
		
		//Use Element based on a number's location in integer
		std::string key[4];
		key[0] = "IVX";
		key[1] = "XLC";
		key[2] = "CDM";
		key[3] = "M";

		int lookUpNumber = 0;
		for (int i = size; i > 0; i--) {
			
			//Calculate number 0-9 based off of location of the number in whole integer
			if (i == 4) {
				lookUpNumber = arabicNumeral / 1000;
			}
			else if (i == 3) {
				lookUpNumber = (arabicNumeral / 100) % 10;
			}
			else if (i == 2) {
				lookUpNumber = (arabicNumeral / 10) % 10;
			}
			else {
				lookUpNumber = arabicNumeral % 10;
			}

			//Reference Key Element based on the location of the number in whole integer
			if (lookUpNumber == 1) {
				romanNumber += (key[i - 1].at(0));
			}
			else if (lookUpNumber == 2) {
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
			}
			else if (lookUpNumber == 3) {
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
			}
			else if (lookUpNumber == 4) {
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(1);
			}
			else if (lookUpNumber == 5) {
				romanNumber += key[i - 1].at(1);
			}
			else if (lookUpNumber == 6) {
				romanNumber += key[i - 1].at(1);
				romanNumber += key[i - 1].at(0);
			}
			else if (lookUpNumber == 7) {
				romanNumber += key[i - 1].at(1);
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
			}
			else if (lookUpNumber == 8) {
				romanNumber += key[i - 1].at(1);
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(0);
			}
			else if (lookUpNumber == 9) {
				romanNumber += key[i - 1].at(0);
				romanNumber += key[i - 1].at(2);
			}
			else {}
		}
	}