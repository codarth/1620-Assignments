/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Sort
  File: a3sort.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: sorts three int, input from user, into largest to smallest
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

int main() {

   //Variable Decleration Section
   double a, b, c, temp;   // three numbers and a temp for swapping

   //Get user input section
   cout << "Please enter three intergers separated by space for a, b, and c: ";
   cin >> a >> b >> c;

   // Calculation and output section

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

   cout << "The new values for a b c are: " << a << " " << b << " " << c;
      
	cout << endl;
	return 0;
}
