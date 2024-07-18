//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://edabit.com/challenge/868Q9JmTSAEhZBBrg

#include<iostream>
using namespace std;

string tweakLetters(string str, int status[]) {

	string res = "";

	for (int i = 0; i < str.length(); ++i) {

		if (str[i] == 'z' && status[i] == 1) {

			res += 'a';
		}
		else if (str[i] == 'a' && status[i] == -1) {

			res += 'z';
		}
		else
			res += ((int)(str[i]) + status[i]);
	}

	return res;
}

string ReadString() {

	string str = "";
	cin >> str;
	return str;
}

int main() {

	string str = ReadString();

	int* status = new int[str.length()];

	for (int i = 0; i < str.length(); ++i) {

		cin >> status[i];
	}

	cout << tweakLetters(str, status) << endl;

	return 0;
}