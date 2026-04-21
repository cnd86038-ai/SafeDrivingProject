#include <iostream>
#include <string>
using namespace std;

/*
Function: getRegInfo
Purpose: Prompt user for region name and accident count, validate input
Preconditions: none
Postconditions:
- accidents >= 0
- regionName and accidents are returend via reference parameteres
*/

void getRegInfo(string& regionName, int& accidents)
{
	cout << "Enter region name: ";
	cin >> regionName;

	do
		{
		cout << "Enter number of accidents: ";
		cin >> accidents;

		if (accidents < 0)
		{
			cout << "Invalid input. Number of accidents cannot be negative. Please try again." << endl;
		}
	} while (accidents < 0);

}