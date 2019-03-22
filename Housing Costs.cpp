// Housing Costs.cpp : This file contains the 'main' function. Program execution begins and ends there.
// C++ Early Objects  Chapter 3 Exercise #3 Housing Costs

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	
	double rentMortgage, utilities, phones, cable;
	double yearlyRentMortgage, yearlyUtilities, yearlyPhones, yearlyCable;

	cout << " Enter your monthly rent/mortgage: \n";
	cin >> rentMortgage;
	cout << " You entered: $" << rentMortgage << " \n";
	cout << " Enter your monthly utilities: \n";
	cin >> utilities;
	cout << " You entered: $" << utilities << " \n";
	cout << " Enter your monthly phone bill: \n";
	cin >> phones;
	cout << " You entered: $ " << phones << " \n";
	cout << " Enter your monthly cable bill: \n";
	cin >> cable;
	cout << " You entered: $ " << cable << " \n";

	// yearly outputs
	//yearly Rent / Mortgage calculation
	yearlyRentMortgage = rentMortgage * 12;
	
	cout << " Your yearly Rent / Mortgage is: $" << yearlyRentMortgage << " \n";

	yearlyUtilities = utilities * 12;

	cout << " Your yearly Utilities Bills are: $" << yearlyUtilities << " \n";

	yearlyPhones = phones * 12;

	cout << " Your yearly Phone Bills are: $" << yearlyPhones << " \n";

	yearlyCable = cable * 12;

	cout << " Your yearly Cable Bills are: $" << yearlyCable << " \n";



	return 0;
	system("pause");
}

