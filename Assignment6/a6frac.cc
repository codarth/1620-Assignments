/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Continued fraction
  File: a6frec.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: calculates the continues fraction from input
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype(s)
void frac(double);

int main()
{
   //Variable Decleration Section
   double value; // for first input
   
   //Get user input section
   cout << "Enter a continued fraction sequence in reverse order (0 to end): ";
   cin >> value;
   
   // Calculation and output section
   frac(value);
	cout << endl;
	return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: frac
   Description: compute the continued fraction
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void frac(double num)
{
    // sum for total, value of the rest of input, temp for reciprocal
   double sum = 0.0, value = 0.0, temp;
   
   while (num != 0)
   {
      temp = (1 / num); // reciprocal
      
      cin >> num; // next input
      if (num == 0)
	 break; // leave loop when 0 entered
      sum = (num + temp);
      num = sum;
   }

   cout << "Value: " <<setprecision(21) << sum << endl;
}
