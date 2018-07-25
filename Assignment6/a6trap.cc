/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Trapezoid
  File: a6trap.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Given the top bottom and hieght build a trapezoid
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Function Prototype(s)
void trap(int t, int b, int h);

int main()
{
   //Variable Decleration Section
   int t, b, h; // top, bottom, height
   
   //Get user input section
   cout << "Please enter the trapezoid data (Top Bottom Hirght); ";
   cin >> t >> b >> h;
   
   // Calculation and output section
   trap(t, b, h);
	cout << endl;
	return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: trap
   Description: Build a trapezoid with inputs
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void trap(int t, int b, int h)
{
//   int y = t + (b - t) * 0; // so not to loose the value of t

   for (int g = 0; g<h; g++) // g is the row number
   {

      
      for (int i = 0; i < t + static_cast<int>((b - t) * (static_cast<double>(g)/(h-1))); i++)
      {
	 
	 cout << "*";
      }
      cout << endl; 
   }
   
}
/* first row t *'s
   last row t+(b-t) *'s

   t+(b-t)*0
   t+(b-t)*.1   row number/ height

   t+(b-t)*1
*/
