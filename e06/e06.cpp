// e06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int A;
int B;
int C;
int main()
{
    std::cout << "Enter the first number:\n";
	std::cin >> A;
	std::cout << "Enter the second number:\n";
	std::cin >> B;
	C = A + B;
	std::cout << "The sum of " << A << " + " << B << " is " << C << "!\n";
	C = A - B;
	std::cout << "The subtraction of " << A << " - " << B << " is " << C << "!\n";
	C = A * B;
	std::cout << "The multiplication of " << A << " * " << B << " is " << C << "!\n";
	C = A / B;
	std::cout << "The division of " << A << " / " << B << " is " << C << "!\n";
	C = A % B;
	std::cout << "The modulus of " << A << " % " << B << " is " << C << "!\n";
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
