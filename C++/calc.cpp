/*
 * Christopher Bennett
 * Basic Text calculator in C++
 * Addition/Subtraction/Division/Multiplication
 * 21/07/2024
 * */


#include <iostream>



int main()
{
	std::cout << "\n\n\tWe Ball\n\n\n";

	double x, y;
	char operation;

	std::cout << "Enter Your First Number\n";
	std::cin >> x;
	std::cout << "Enter Your Second number\n";
	std::cin >> y;

	std::cout << "You Entered:\n";
	std::cout << x << "\n";
	std::cout << y << "\n";

	std::cout << "Enter A for Addition\n" << "Enter S for Subtraction\n";
	std::cout << "Enter D for Division\n" << "Enter M for multiplication\n";
	std::cin >> operation;
	operation = toupper(operation);

	std::cout << "You Entered\t" << operation << "\n";
	

	if (operation == 'A'){
		std::cout << "The Answer is\t" << x + y;
	}
	else if (operation == 'S'){
		std::cout << "The Answer is\t" << x - y;
	}
	else if (operation == 'D'){
		std::cout << "The Answer is\t" << x / y;
	}
	else if (operation == 'M'){
		std::cout << "The Answer is\t" << x * y;
	}
	std::cout << "\n";


	return 0;
}

