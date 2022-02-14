/*
Class: CSE 1321L
Section: E01
Term: Spring 2022
Instructor: Kavitha Muppa
Name: Jack Cochran
Lab#: 1
*/
// Lab1C
// Demonstrate the use of the cin, or standard input stream to read numeric data.
// Calculates fuel efficiency based on values entered by the user.
#include <iostream>
using namespace std;
int main ()
{
int miles;
double gallons, mpg;
cout << "Enter the number of miles: ";
cin >> miles;
cout << "Enter the gallons of fuel used: ";
cin >> gallons;
mpg = miles / gallons;
cout << "Miles Per Gallon: " << mpg << endl << endl;
}