// CGT-215-Lab-03-bharga66.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Your Choice: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value (A): ";
	cin >> A;
	cout << "Please enter the second value (B): ";
	cin >> B;
	// The rest of this function is an exercise to the reader
}

int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		cout << "The addition of A and B is " << A + B;
	}
	if (choice == 2) {
		cout << "The subtraction of A and B is " << A - B;
	}
	if (choice == 3) {
		cout << "The multiplication of A and B is " << A * B;
	}
	if (choice == 4) {
		cout << "The division of A and B is " << A / B;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
