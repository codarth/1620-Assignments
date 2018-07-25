/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: triangle
  File: a3triangle.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Determine if the three input are a triangle, if so what kind
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

int main() {

   //Variable Decleration Section
   double a, b, c, temp;
   //Get user input section
   cout << "Please enter the length of the three sides separated by space: ";
   cin >> a >> b >> c;

   // Calculation and output section

// sort sides
   if (a < b)
   {
      temp = a;
      a = b;
      b = temp;
   }
   if (a < c)
   {
      temp = a;
      a = c;
      c = temp;
   }
      if (b < c)
   {
      temp = b;
      b = c;
      c = temp;
   }

      cout << a<<" "<<b<<" "<<c<< endl;

      if ((a >= b + c) || (b >= a + c) || (c >= a + b))
	 cout << "The triangle cannot exist." << endl;
      else
	 if ((a == b) && (a == c) && (b == c))
	    cout << "The triangle is equilateral." << endl;
	 else
	    if ((a == b || a == c || b == c) && (a != b != c))
	       cout << "The triangle is isosceles." << endl;
	    else
	       cout << "The triangle is scalene" << endl;

      
	cout << endl;
	return 0;
}
