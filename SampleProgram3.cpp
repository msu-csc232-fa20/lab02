/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program demonstrates the use of nested structures.
 * @file SampleProgram3.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

struct center_struct
{
	float x;	// x coordinate of center 
	float y;	// y coordinate of center
};

struct circle
{
	float radius;
	float area;
	float circumference;
	center_struct coordinate;
};

const float PI = 3.14159;

int main()
{
	circle circ1, circ2;	// defines 2 circle structure variables

	std::cout << "Please enter the radius of the first circle: ";
	std::cin >> circ1.radius;

	std::cout << std::endl
		 << "Please enter the x-coordinate of the center: ";
	std::cin >> circ1.coordinate.x;

	std::cout << std::endl
		 << "Please enter the y-coordinate of the center: ";
	std::cin >> circ1.coordinate.y;

	circ1.area = PI * pow(circ1.radius, 2.0);
	circ1.circumference = 2 * PI * circ1.radius;

	std::cout << std::endl << std::endl;

	std::cout << "Please enter the radius of the second circle: ";
	std::cin >> circ2.radius;

	std::cout << std::endl
		 << "Please enter the x-coordinate of the center: ";
	std::cin >> circ2.coordinate.x;

	std::cout << std::endl
		 << "Please enter the y-coordinate of the center: ";
	std::cin >> circ2.coordinate.y;

	circ2.area = PI * pow(circ2.radius, 2.0);
	circ2.circumference = 2 * PI * circ2.radius;

	std::cout << std::endl << std::endl;

	std::cout << std::setprecision(2) << std::fixed << std::showpoint;

	std::cout << "The area of the first circle is : ";
	std::cout << circ1.area << std::endl;

	std::cout << "The circumference of the first circle is: ";
	std::cout << circ1.circumference << std::endl;

	std::cout << "Circle 1 is centered at (" << circ1.coordinate.x
		 << "," << circ1.coordinate.y << ")." << std::endl << std::endl;

	std::cout << "The area of the second circle is : ";
	std::cout << circ2.area << std::endl;

	std::cout << "The circumference of the second circle is: ";
	std::cout << circ2.circumference << std::endl;

	std::cout << "Circle 2 is centered at (" << circ2.coordinate.x
		 << "," << circ2.coordinate.y << ")." << std::endl << std::endl;

	return EXIT_SUCCESS;
}