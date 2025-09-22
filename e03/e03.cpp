#pragma region NATIVE
#include <iostream>

char* name = new char[255];

int main()
{
	std::cout << "What is your name?\n";
	std::cin >> name;
	std::cout << "Hello, " << name << "!\n";
}
#pragma endregion


#pragma region STD
#include <string>
std::string name_std;

void main_std()
{
	std::cout << "What is your name?\n";
	std::cin >> name_std;
	std::cout << "Hello, " << name_std << "!\n";
}

#pragma endregion

