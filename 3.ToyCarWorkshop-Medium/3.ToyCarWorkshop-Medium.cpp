//Author : Abdulhamit Sahadi
//Created: July 21, 2024
//Problem Link: https://edabit.com/challenge/Ccoo3SHJwv4qCLKQb

#include<iostream>
using namespace std;


int main() {

	int wheels = 0, bodies = 0, people = 0;
	cin >> wheels >> bodies >> people;

	if (wheels < 4 || bodies < 1 || people < 2) {

		cout << 0 << "\n";
	}
	else {

		cout << min(wheels / 4, min(bodies, people / 2)) << "\n";
	}

	return 0;
}