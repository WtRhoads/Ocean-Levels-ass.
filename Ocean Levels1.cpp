// Ocean Levels1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main () 
{
	//states water rises per year
	//defines rise rate
	cout << "The ocean water level is rising 1.5 millimeters a year " << "\n";
	float rise;
	const float millimeters = 1.5;

	//calculate the ocean level rise in 5 years 
	//state the level of change
		rise = millimeters * 5;
		cout << "The rise of the ocean level over 5 years is " << rise << "\n";

	//calculate the ocean level rise in 7 years
	//state level of change
		rise = millimeters * 7;
		cout << "The rise of the ocean level over 7 years is" << rise << "\n";

	//calculate the ocean level rise in 10 years
	//state level of change
		rise = millimeters * 10;
		cout << "The rise of the ocean level over 10 years is " << rise << "\n";

		return 0;
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
