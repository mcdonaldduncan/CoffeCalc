// Coffeemachine.cpp : Defines the entry point for the application.
//

#include "Coffeemachine.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int totalH2O = 0;
	int ozpercup = 2;

	// Read
	string temp;
	ifstream ReadFile("input.txt");

	while (getline(ReadFile, temp))
	{
		totalH2O += stoi(temp);
	}

	// Write
	ofstream WriteFile("output.txt");

	WriteFile << "Total Water: " << totalH2O << " cups" << endl;
	WriteFile << "Total Grounds: " << totalH2O * ozpercup << " oz" << endl;

	WriteFile.close();

	cout << "Total Water: " << totalH2O << " cups" << endl;
	cout << "Total Grounds: " << totalH2O * ozpercup << " oz" << endl;

}
