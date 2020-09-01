#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// This program demonstrates the use of structures 

// structure declaration 
struct course
{
	string discipline;
	int courseNumber;
	string courseTitle;
	short credits;
};

int main()
{
	course nextClass;	// next class is a course structure

	int numCredits = 0;
	char addClass;

	do
	{
		cout << "Please enter course discipline area: ";
		cin >> nextClass.discipline;

		cout << endl << "Pleae enter the course number: ";
		cin >> nextClass.courseNumber;

		cout << endl << "Please enter the course title: ";
		cin.ignore();	// necessary for the next line 
		getline(cin, nextClass.courseTitle);
		// use getline because course title may have a blank space 

		cout << "Please enter the number of credit hours: ";
		cin >> nextClass.credits;

		numCredits = numCredits + nextClass.credits;

		// output the selected course and pertinent information
		cout << "You have been registered for the following: " << endl;
		cout << nextClass.discipline << " " << nextClass.courseNumber
			 << " " << nextClass.courseTitle
			 << " " << nextClass.credits << " credits" << endl;

		cout << "Would you like to add another class ? (Y / N)" << endl;
		cin >> addClass;

	} while (toupper(addClass) == 'Y');

	cout << "The total number of credit hours registered for is: "
		 << numCredits << endl;

	return 0;
}