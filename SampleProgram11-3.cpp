#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

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

	cout << "Please enter the radius of the first circle: ";
	cin >> circ1.radius;

	cout << endl
		 << "Please enter the x-coordinate of the center: ";
	cin >> circ1.coordinate.x;

	cout << endl
		 << "Please enter the y-coordinate of the center: ";
	cin >> circ1.coordinate.y;

	circ1.area = PI * pow(circ1.radius, 2.0);
	circ1.circumference = 2 * PI * circ1.radius;

	cout << endl << endl;

	cout << "Please enter the radius of the second circle: ";
	cin >> circ2.radius;

	cout << endl
		 << "Please enter the x-coordinate of the center: ";
	cin >> circ2.coordinate.x;

	cout << endl
		 << "Please enter the y-coordinate of the center: ";
	cin >> circ2.coordinate.y;

	circ2.area = PI * pow(circ2.radius, 2.0);
	circ2.circumference = 2 * PI * circ2.radius;

	cout << endl << endl;

	cout << setprecision(2) << fixed << showpoint;

	cout << "The area of the first circle is : ";
	cout << circ1.area << endl;

	cout << "The circumference of the first circle is: ";
	cout << circ1.circumference << endl;

	cout << "Circle 1 is centered at (" << circ1.coordinate.x
		 << "," << circ1.coordinate.y << ")." << endl << endl;

	cout << "The area of the second circle is : ";
	cout << circ2.area << endl;

	cout << "The circumference of the second circle is: ";
	cout << circ2.circumference << endl;

	cout << "Circle 2 is centered at (" << circ2.coordinate.x
		 << "," << circ2.coordinate.y << ")." << endl << endl;

	return 0;
}