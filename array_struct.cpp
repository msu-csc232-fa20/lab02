/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program demonstrates how to use an array of structures.
 * @file array_struct.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: replace this line with your name here in the above format
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

// TODO: Fill in code to declare a structure called taxPayer that has three
// members:	taxRate, income, and taxes -- each of type float

int main()
{
	// TODO: Fill in code to define an array named citizen which holds
	// 5 taxPayers structures

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	std::cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	std::cout << std::endl << std::endl << std::endl;

	for (int count = 0; count < 5; count++)
	{
		std::cout << "Enter this year's income for tax payer " << (count + 1);
		std::cout << ": ";

		// TODO: Fill in code to read in the income to the appropriate place

		std::cout << "Enter the tax rate for tax payer # " << (count + 1);
		std::cout << ": ";

		// TODO: Fill in code to read in the tax rate to the appropriate place

		// TODO: Fill in code to compute the taxes for the citizen and store it
		// in the appropriate place

		std::cout << std::endl;
	}

	std::cout << "Taxes due for this year: " << std::endl << std::endl;

	// TODO: Fill in code for the first line of a loop that will output the
	// tax information
	{
		std::cout << "Tax Payer # " << (index + 1) << ": " << "$ "
		     << citizen[index].taxes << std::endl;
	}

	return EXIT_SUCCESS;
}
