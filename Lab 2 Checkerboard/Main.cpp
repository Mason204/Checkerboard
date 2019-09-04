/*
Mason Henry
C++ Fall 2019
Due: September 12, 2019
Checker Board
We are to output a checkerboard to the screen using astericks and spaces.
*/

#include <iostream>	

using namespace::std;

//The E is for the even lines and O if for odd lines.
const string E = "  *    *    *    *";
const string O = "*    *    *    *  ";

int main()
{
	//outputting a checkerboard pattern to the screen that is slightly off center and bothers me...
	cout << E << endl;
	cout << O << endl;
	cout << E << endl;
	cout << O << endl;
	cout << E << endl;
	cout << O << endl;
	cout << E << endl;
	cout << O << endl;

	return 0;
}