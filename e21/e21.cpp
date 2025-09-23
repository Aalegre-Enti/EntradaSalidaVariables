// e21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int day, month, year;
int main()
{
	std::cout << "Enter day: ";
	std::cin >> day;
	std::cout << "Enter month: ";
	std::cin >> month;
	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << "The seconds passed since 01/01/0001 are: " << ((day-1) + ((month-1) * 30) + ((year-1) * 365)) * 24 * 60 * 60 << std::endl;
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
