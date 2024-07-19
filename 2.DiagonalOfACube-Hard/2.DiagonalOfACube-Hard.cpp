//Author : Abdulhamit Sahadi
//Created: July 19, 2024
//Problem Link: https://edabit.com/challenge/uEiTAhNN6HgESspWb


#include<iostream>
using namespace std;

double cubeDiagonal(double volume) {

	double side = pow(volume, 1 / 3.0);

	double mainDiagonal = sqrt(3) * side;

	return mainDiagonal;
}

double ReadPositiveDouble() {

	double number = 0.0;

	do {
		cin >> number;

	} while (number <= 0.0);

	return number;
}

int main() {

	double volumeOfCube = ReadPositiveDouble();

	cout << cubeDiagonal(volumeOfCube) << endl;

	return 0;
}