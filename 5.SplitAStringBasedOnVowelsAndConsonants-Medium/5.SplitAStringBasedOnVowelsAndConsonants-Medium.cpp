//Author : Abdulhamit Sahadi
//Created: August 02, 2024
//Problem Link: https://edabit.com/challenge/E2oQvpnwuMMfYJ6gq

#include<iostream>
#include<string>

using namespace std;

bool isVowel(char c) {

	return (c == 'e' || c == 'a' || c == 'u' || c == 'i' || c == 'o');
}

string getConsonantsAndSpecial(string str) {

	string res = "";

	for (int i = 0; i < str.length(); ++i) {

		if (!isVowel(str[i])) {

			res += str[i];
		}
	}

	return res;
}

string getVowels(string str) {

	string res = "";

	for (int i = 0; i < str.length(); ++i) {

		if (isVowel(str[i])) {

			res += str[i];
		}
	}

	return res;   
}

int main() {

	string str = "";
	getline(cin, str);

	string vowels = getVowels(str);
	string consonantsWithSpecial = getConsonantsAndSpecial(str);

	cout << vowels << consonantsWithSpecial;

	return 0;
}