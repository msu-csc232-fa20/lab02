/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * @brief This program demonstrates the use of structures.
 * @file SampleProgram2.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cmath>	// necessary for pow function
#include <cstdlib>
#include <iomanip>
#include <iostream>

struct circle	// declares the structure circle
{				// This structure has 6 members 
	float centerX; // x coordinate of center
	float centerY; // y coordinate of center 
	float radius;
	float area;
	float circumference;
	float distance_from_origin;
};

const float PI = 3.14159;

int main()
{
	circle circ1, circ2; // defines 2 circle structure variables 

	std::cout << "Please enter the radius of the first circle: ";
	std::cin >> circ1.radius;

	std::cout << std::endl
		 << "Please enter the x-coordinate of the center: ";
	std::cin >> circ1.centerX;

	std::cout << std::endl
		 << "Please enter the y-coordinate of the center: ";
	std::cin >> circ1.centerY;

	circ1.area = PI * pow(circ1.radius, 2.0);

	circ1.circumference = 2 * PI * circ1.radius;

	circ1.distance_from_origin = sqrt(pow(circ1.centerX, 2.0)
		                         + pow(circ1.centerY, 2.0));

	std::cout << std::endl << std::endl;

	std::cout << "Please enter the radius of the second circle: ";
	std::cin >> circ2.radius;

	std::cout << std::endl
		 << "Please enter the x-coordinate of the center: ";
	std::cin >> circ2.centerX;

	std::cout << std::endl
		 << "Please enter the y-coordinate of the center: ";
	std::cin >> circ2.centerY;

	circ2.area = PI * pow(circ2.radius, 2.0);

	circ2.circumference = 2 * PI * circ2.radius;

	circ2.distance_from_origin = sqrt(pow(circ2.centerX, 2.0)
								 + pow(circ2.centerY, 2.0));
	std::cout << std::endl << std::endl;

	// This next section determines which circle's center is
	// closer to the origin

	if (circ1.distance_from_origin > circ2.distance_from_origin)
	{
		std::cout << "The first circle is further from the origin"
			 << std::endl << std::endl;
	}

	else if (circ1.distance_from_origin < circ2.distance_from_origin)
	{
		std::cout << "The first circle is closer to the origin"
			 << std::endl << std::endl;
	}

	else
		std::cout << "The two circles are equidistant from the origin";

	std::cout << std::endl << std::endl;
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;

	std::cout << "The area of the first circle is : ";
	std::cout << circ1.area << std::endl;

	std::cout << "The circumference of the first circle is: ";
	std::cout << circ1.circumference << std::endl << std::endl;


	std::cout << "The area of the second circle is : ";
	std::cout << circ2.area << std::endl;

	std::cout << "The circumference of the second circle is: ";
	std::cout << circ2.circumference << std::endl << std::endl;

	return EXIT_SUCCESS;
}
