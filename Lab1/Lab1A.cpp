/*
Class: CSE 1321L
Section: E01
Term: Spring 2022
Instructor: Kavitha Muppa
Name: Jack Cochran
Lab#: 1
*/
// Lab1A
// Demonstrate the difference of include endl (endline)
// Prints two lines of output representing a rocket countdown.
#include <iostream>
using namespace std;
int main ()
{
 cout << "Three... ";
 cout << "Two... ";
 cout << "One... ";
 cout << "Zero... ";
 cout << "Liftoff!" << endl;
 // appears on first line
 cout << "Houston, we have a problem." << endl << endl;
}