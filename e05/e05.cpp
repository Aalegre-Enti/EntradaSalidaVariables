// e05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string name;
int age;
std::string street;
int number;

int main()
{
	std::cout << "What is your name?\n";
	std::cin >> name;
	std::cout << "How old are you?\n";
	std::cin >> age;
	std::cout << "What is your street name?\n";
	std::cin >> street;
	std::cout << "What is your house number?\n";
	std::cin >> number;
	std::cout << "===================\n";
	std::cout << "     YOUR DATA     \n";
	std::cout << "===================\n";
	std::cout << "Your name is: " << name << "\n";
	std::cout << "Your age is: " << age << "\n";
	std::cout << "You live in: " << street << ", " << number << "\n";
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
