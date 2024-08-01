//Author : Abdulhamit Sahadi
//Created: August 01, 2024
//Problem Link: https://edabit.com/challenge/s695FkhRd3J65tmdQ

#include<iostream>
#include<string>

using namespace std;


string doubleSwap(string str, char c1, char c2) {

	for (int i = 0; i < str.length(); ++i) {

		if (str[i] == c1) {
			
			str[i] = c2;
		}
		else if (str[i] == c2) {

			str[i] = c1;
		}
	}

	return str;
}

int main() {

	string str = "";
	getline(cin, str);

	char c1, c2;
	cin >> c1 >> c2;

	cout << doubleSwap(str, c1, c2) << endl;
}