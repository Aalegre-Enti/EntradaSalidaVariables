// e08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int number;

int main()
{
	std::cout << "Enter a number:\n";
	std::cin >> number;
	if (number >= 1000000 || number <= 999999) {
		std::cout << "The number does not have 6 digits!\n";
	}
	std::cout << "100000ths: " << (number / 100000) % 10 << "\n";
	std::cout << "10000ths: " << (number / 10000) % 10 << "\n";
	std::cout << "1000ths: " << (number / 1000) % 10 << "\n";
	std::cout << "100ths: " << (number / 100) % 10 << "\n";
	std::cout << "10ths: " << (number / 10) % 10 << "\n";
	std::cout << "1ths: " << number % 10 << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
