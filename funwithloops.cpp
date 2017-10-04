#include <iostream>
using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();

int main() {
	char loop = 'y';
	int choice = 0;

	system("CLS"); // to clean up other menu selections
	cout << "==============MENU==============" << endl;
	cout << "PICK AN OPTION!" << endl;
	cout << "1 - Test out Problem 1." << endl;
	cout << "2 - Test out Problem 2." << endl;
	cout << "3 - Test out Problem 3." << endl;
	cout << "4 - Test out Problem 4." << endl;
	cout << "5 - Exit the program." << endl;

	cin >> choice;
	do {

		switch (choice)
		{
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
		case 3:
			problem3();
			break;
		case 4:
			problem4();
			break;
		case 5:
			cout << "End of program." << endl;
			loop = 'n';
			system("pause");
			break;
		default:
			cout << "Not a valid choice please try again." << endl;
			system("pause");
			main();
			break;
		}
	} while ((loop == 'Y') && (loop == 'y'));

	return 0;
}

void problem1() {
	int input = 0;
	int sum = 0;
	cout << "Please input a number." << endl;
	cin >> input;

	do {
		if (input % 2 == 0) {
			input--;
		}
		else {
			sum = sum + input;
			input--;
		}
	} while (input >= 0);
	cout << "Sum of odd numbers is: " << sum << endl;
	system("pause");
	main();
}


void problem2() {
	int height = 0;
	int space, c, k = 1;

	cout << "How many units do you want the height to be?: " << endl;
	cin >> height;
	space = height - 1;

	for (k = 1; k <= height; k++)
	{
		for (c = 1; c <= space; c++)
			cout << " ";
		space--;
		for (c = 1; c <= 2 * k - 1; c++)
			cout << "*";
		cout << "\n";
	}
	space = 1;
	for (k = 1; k <= height - 1; k++)
	{
		for (c = 1; c <= space; c++)
			cout << " ";
		space++;
		for (c = 1; c <= 2 * (height - k) - 1; c++)
			cout << "*";
		cout << "\n";
	}
	system("pause");
	main();
}

void problem3() {
	int input = 0;

	cout << "Please input a number. " << endl;
	cin >> input;

	cout << "0th power: " << pow(input, 0) << endl;
	cout << "1st power: " << pow(input, 1) << endl;
	cout << "2nd power: " << pow(input, 2) << endl;
	cout << "3rd power: " << pow(input, 3) << endl;

	system("pause");
	main();
}

void problem4() {
	int rows, columns;
	int print = 0;

	cout << "How many rows do you want?: " << endl;
	cin >> rows;
	cout << "how many columns do you want?: " << endl;
	cin >> columns;
	cout << "What number would you like to print with?: " << endl;
	cin >> print;
	cout << endl;

	for (int i = 1; i <= columns; i++)
	{
		for (int r = 1; r <= rows; r++)
		{
			cout << print;
		}
		cout << endl;
	}
	system("pause");
	main();
}
