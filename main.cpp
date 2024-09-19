#include <iostream>
#include <string>

int main() 
{
	unsigned int A,B,C;
	short N;
	char x;

	std::cout << "Enter natural number A: ";
	std::cin >> A;
	std::cout << "Enter natural number B: ";
	std::cin >> B;
	std::cout << "Enter natural number C: ";
	std::cin >> C;
	std::cout << "Enter natural number N (month): ";
	std::cin >> N;
	std::cout << "Type -1 or 1 to x: ";
	std::cin >> x;

	// 1
	if (A < B && B > C) {
		std::cout << B+A-C << std::endl;
	} else if (B % C == 0) {
		std::cout << B/C-B << std::endl;
	} else {
		std::cout << A*B-C << std::endl;
	}

	// 2
	std::string month;
	switch (N) {
		case 1:
			month = "January";
			break;
		case 2:
			month = "February";
			break;
		case 3:
			month = "March";
			break;
		case 4:
			month = "April";
			break;
		case 5:
			month = "May";
			break;
		case 6:
			month = "June";
			break;
		case 7:
			month = "July";
			break;
		case 8:
			month = "August";
			break;
		case 9:
			month = "September";
			break;
		case 10:
			month = "October";
			break;
		case 11:
			month = "November";
			break;
		case 12:
			month = "December";
			break;
		default:
			month = "Unknown";
			break;
	}
	std::cout << "Month: " << month << std::endl;
	
	// 3 (if minus = negative. Positive only if x equls 1.)
	std::cout << "x == " << x << ", result: " << (x == 1 ? "Positive Number" : "Negative Number") << std::endl;

	return 0;
}