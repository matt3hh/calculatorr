#include <iostream>

using namespace std; 

int main() {
	char operation; 
	double num1, num2;
	char repeat;

	do {

		cout << "simple calculator" << endl;
		cout << "choose an operation (+ or -)";
		cin >> operation;

		if (operation != '+' && operation != '-') {
			cout << "invalid operation! Use + or -" << endl;
			return 1;
		}
		cout << "enter the first number: ";
		cin >> num1;
		cout << "enter second number: ";
		cin >> num2;

		if (operation == '+') {
			cout << "result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

		}
		else if (operation == '-') {
			cout << "result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
		}
		cout << "would you like to perform another calculation? (y/n): ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');

	 
	cout << "thank you for using the calculator, Byeee!" << endl;



	return 0;

}


