//Author : Abdulhamit Sahadi
//Created: August 05, 2024
//Problem Link: https://edabit.com/challenge/ZhEBoaEfMcK6vT7Kx

#include<iostream>
#include<vector>

using namespace std;

bool areHexCharacter(string code) {

	string digits = "0123456789";
	string alphabetic = "AaBbCcDdEeFf";

	bool isExist = false;

	for (int i = 1; i < code.length(); ++i) {

		isExist = false;

		for (int j = 0; j < digits.length(); ++j) {

			if (code[i] == digits[j]) {

				isExist = true;
				break;
			}
		}

		for (int k = 0; k < 12; ++k) {

			if (code[i] == alphabetic[k]) {

				isExist = true;
				break;
			}
		}

		if (!isExist) {
			
			return false;
		}
	}

	return true;
}

bool isValidHexCode(string code) {

	if (code.length() != 7 || code[0] != '#'
		|| !areHexCharacter(code)) return false;

	return true;
}

int main() {

	string code = "";
	cin >> code;

	cout << isValidHexCode(code);

	return 0;
}