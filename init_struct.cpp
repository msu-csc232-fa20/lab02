/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program demonstrates partially initialized structure variables.
 * @file init_struct.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: replace this line with your name here in the above format
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

struct taxPayer
{
	std::string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	// TODO: Fill in code to initialize a structure variable named citizen1 so that
	// the first three members are initialized.	Assume the name is Tim
	// McGuiness, the social security number is 255871234, and the tax rate is .35

	// TODO: Fill in code to initialize a structure variable named citizen2 so that
	// the first three members are initialized.	Assume the name is John Kane,
	// the social security number is 278990582, and the tax rate is .29

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	// calculate taxes due for citizen1

	// TODO: Fill in code to prompt the user to enter this year's income for the citizen1

	// TODO: Fill in code to read in this income to the appropriate structure member

	// TODO: Fill in code to determine this year's taxes for citizen1

	std::cout << "Name: " << citizen1.name << std::endl;

	std::cout << "Social Security Number: " << citizen1.socialSecNum <<std:: endl;

	std::cout << "Taxes due for this year: $" << citizen1.taxes << std::endl << std::endl;

	// calculate taxes due for citizen2

	// TODO: Fill in code to prompt the user to enter this year's income for citizen2

	// TODO: Fill in code to read in this income to the appropriate structure member

	// TODO: Fill in code to determine this year's taxes for citizen2

	std::cout << "Name: " << citizen2.name << std::endl;

	std::cout << "Social Security Number: " << citizen2.socialSecNum <<std:: endl;

	std::cout << "Taxes due for this year: $" << citizen2.taxes << std::endl << std::endl;

	return EXIT_SUCCESS;
}
