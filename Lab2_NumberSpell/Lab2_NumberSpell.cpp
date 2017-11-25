
// Output: The spelling of each of the numbers from input.
// Input: Two numbers (0 to 9) separated by a space.
// Lab2_NumberSpell
// CS 13011
// Amrit Vernon Ramsundar
// 11/25/17


#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two numbers (separated by a space) each from 0 to 9: ";
	int one, two;
	cin >> one >> two;

	if (one == 1) {
		switch (two) {
		case 0:
			cout << "ten" << endl;
			break;
		case 1:
			cout << "eleven" << endl;
			break;
		case 2:
			cout << "twelve" << endl;
			break;
		case 3:
			cout << "thirteen" << endl;
			break;
		case 4:
			cout << "fourteen" << endl;
			break;
		case 5:
			cout << "fifteen" << endl;
			break;
		case 6:
			cout << "Sixteen" << endl;
			break;
		case 7:
			cout << "seventeen" << endl;
			break;
		case 8:
			cout << "eighteen" << endl;
			break;
		case 9:
			cout << "nineteen" << endl;
			break;	
		}
	}
	else if (one == 2) {
		cout << "twenty ";
		return 0;
	}

	else if (one == 3) {
		cout << "thirty ";
	}
	else if (one == 4) {
		cout << "forty ";
	}
	else if (one == 5) {
		cout << "fifty ";
	}
	else if (one == 6) {
		cout << "sixty ";
	}
	else if (one == 7) {
		cout << "seventy ";
	}
	else if (one == 8) {
		cout << "eighty ";
	}
	else if (one == 9) {
		cout << "ninety ";
	}

	switch (two) {
	case 1:
		cout << "one" << endl;
		break;
	case 2:
		cout << "two" << endl;
		break;
	case 3:
		cout << "three" << endl;
		break;
	case 4:
		cout << "four" << endl;
		break;
	case 5:
		cout << "five" << endl;
		break;
	case 6:
		cout << "six" << endl;
		break;
	case 7:
		cout << "seven" << endl;
		break;
	case 8:
		cout << "eight" << endl;
		break;
	case 9:
		cout << "nine" << endl;
		break;
	}
	
	system("PAUSE");
	return 0;
}

			



