// framing-greeting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Please enter your name: ";

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	const int row_pad = 1;
	const int col_pad = 3;

	const int rows = row_pad * 2 + 3;
	const string::size_type cols = greeting.size() + col_pad * 2 + 2;

	cout << endl;

	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		while (c != cols) {
			if (r == row_pad + 1 && c == col_pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}

		cout << endl;
	}
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
