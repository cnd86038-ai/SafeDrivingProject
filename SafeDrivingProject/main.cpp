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

/*
Function: isLower
Purpose: Compare two accident counts and determine if the first is lower than the second
Preconditions: both are validated accident counts
Postconditions: returns true if acc1 <= acc2, false otherwise
*/

bool isLower(int acc1, int acc2)
{
	return acc1 <= acc2;
}

/*
Function: showLowest
Purpose: Displays the region with the lowest number of accidents.
Preconditions: regionName corresponds to the lowest accident count.
Postconditions: Output is displayed to the screen.
*/

void showLowest(string regionName, int accidents)
{
	cout << "\nSafest Region:\n";
	cout << "Region: " << regionName << endl;
	cout << "Accidents: " << accidents << endl;
}

int main()
{
	const int NUM_REGIONS = 2; // Number of regions to compare (can change as needed)
	string regionName;
	string lowestRegion;
	int accidents;
	int lowestAccidents = 0;

	for (int i = 0; i < NUM_REGIONS; i++)
	{
		cout << "\nRegion " << (i + 1) << " Information:\n";

		getRegInfo(regionName, accidents);
		if (i == 0 || isLower(accidents, lowestAccidents))
		{
			lowestRegion = regionName;
			lowestAccidents = accidents;
		}
		else
			{
			//compare using isLower function to determine if current region has more accidents than lowestRegion
			if (!isLower(accidents, lowestAccidents))
			{
				lowestRegion = regionName;
				lowestAccidents = accidents;
			}
		}
	}
	showLowest(lowestRegion, lowestAccidents);

	return 0;
}