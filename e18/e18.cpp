// e18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
float payedA;
float payedB;
float payedC;

int main()
{
	std::cout << "Enter the amount payed by person A:\n";
	std::cin >> payedA;
	std::cout << "Enter the amount payed by person B:\n";
	std::cin >> payedB;
	std::cout << "Enter the amount payed by person C:\n";
	std::cin >> payedC;
	std::cout << "Person A payed this percentage: " << (payedA / (payedA + payedB + payedC)) * 100.0f << "%\n";
	std::cout << "Person B payed this percentage: " << (payedB / (payedA + payedB + payedC)) * 100.0f << "%\n";
	std::cout << "Person C payed this percentage: " << (payedC / (payedA + payedB + payedC)) * 100.0f << "%\n";
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
