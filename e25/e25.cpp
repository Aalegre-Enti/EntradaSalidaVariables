// e25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int euros;

int main()
{
	std::cout << "Enter amount in Euros: ";
	std::cin >> euros;
    int b500 = euros / 500; 
    euros %= 500;
    int b200 = euros / 200; 
    euros %= 200;
    int b100 = euros / 100; 
    euros %= 100;
    int b50 = euros / 50; 
    euros %= 50;
    int b20 = euros / 20; 
    euros %= 20;
    int b10 = euros / 10; 
    euros %= 10;
    int b5 = euros / 5; 
    euros %= 5;
    int m2 = euros / 2; 
    euros %= 2;
    int m1 = euros / 1; 
    euros %= 1;

    std::cout << "\nDesglose (todas las denominaciones):\n";
    std::cout << b500 << " x 500EUR\n";
    std::cout << b200 << " x 200EUR\n";
    std::cout << b100 << " x 100EUR\n";
    std::cout << b50 << " x 50EUR\n";
    std::cout << b20 << " x 20EUR\n";
    std::cout << b10 << " x 10EUR\n";
    std::cout << b5 << " x 5EUR\n";
    std::cout << m2 << " x 2EUR\n";
    std::cout << m1 << " x 1EUR\n";
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
