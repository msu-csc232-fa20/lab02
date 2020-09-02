/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program demonstrates the use of structures.
 * @file SampleProgram1.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

// structure declaration 
struct course
{
	std::string discipline;
	int courseNumber;
	std::string courseTitle;
	short credits;
};

int main()
{
	course nextClass;	// next class is a course structure

	int numCredits = 0;
	char addClass;

	do
	{
		std::cout << "Please enter course discipline area: ";
		std::cin >> nextClass.discipline;

		std::cout << std::endl << "Pleae enter the course number: ";
		std::cin >> nextClass.courseNumber;

		std::cout << std::endl << "Please enter the course title: ";
		std::cin.ignore();	// necessary for the next line 
		std::getline(std::cin, nextClass.courseTitle);
		// use std::getline because course title may have a blank space 

		std::cout << "Please enter the number of credit hours: ";
		std::cin >> nextClass.credits;

		numCredits = numCredits + nextClass.credits;

		// output the selected course and pertinent information
		std::cout << "You have been registered for the following: " << std::endl;
		std::cout << nextClass.discipline << " " << nextClass.courseNumber
			 << " " << nextClass.courseTitle
			 << " " << nextClass.credits << " credits" << std::endl;

		std::cout << "Would you like to add another class ? (Y / N)" << std::endl;
		std::cin >> addClass;

	} while (toupper(addClass) == 'Y');

	std::cout << "The total number of credit hours registered for is: "
		 << numCredits << std::endl;

	return EXIT_SUCCESS;
}
