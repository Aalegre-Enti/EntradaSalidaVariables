// e17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
float base;
float interest;
float months;

int main()
{
	std::cout << "Enter the base amount:\n";
	std::cin >> base;
	std::cout << "Enter the interest rate (as a percentage):\n";
	std::cin >> interest;
	std::cout << "Enter the number of months:\n";
	std::cin >> months;
	std::cout << "The final amount is: " << base + base * (interest / 100.0f) * months << "!\n";
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
