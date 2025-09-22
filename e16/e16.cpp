// e16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
float meters;

int main()
{
	std::cout << "Enter an amount of length in meters:\n";
	std::cin >> meters;
	std::cout << "The amount in miles is: " << meters / 1609.34f << "!\n";
	std::cout << "The amount in yards is: " << meters * 1.09361f << "!\n";
	std::cout << "The amount in feet is: " << meters * 3.28084f << "!\n";
	std::cout << "The amount in inches is: " << meters * 39.3701f << "!\n";
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
