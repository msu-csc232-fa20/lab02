/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program uses a structure to hold data about a rectangle.
 *        It calculates the area and perimeter of a box.
 * @file nestedRect_struct.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: replace this line with your name here in the above format
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

// TODO: Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width

// TODO: Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable

int main()
{
	// TODO: Fill in code to define a rectangle structure variable named box.

	std::cout << "Enter the length of a rectangle: ";

	// TODO: Fill in code to read in the length to the appropriate location

	std::cout << "Enter the width of a rectangle: ";

	// TODO: Fill in code to read in the width to the appropriate location

	std::cout << std::endl << std::endl;

	// TODO: Fill in code to compute the area and store it in the appropriate
	// location

	// TODO: Fill in code to compute the perimeter and store it in the
	// appropriate location

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	std::cout << "The area of the rectangle is " << box.attributes.area << std::endl;

	std::cout << "The perimeter of the rectangle is " << box.attributes.perimeter
		 << std::endl;

	return EXIT_SUCCESS;
}
