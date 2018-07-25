/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Harmonic numbers
  File: a5harm.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: calculate the Harmonic number given
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constant(s)

//Function Prototype(s)
double harmonic(double n);

int main()
{

   //Variable Decleration Section
   double n; //for user input
   
   //Get user input section
   cout << "Please enter a value for n: ";
   cin >> n;
   
   // Calculation and output section
   cout << "H_n = " << setprecision(17) << harmonic(n) << endl
	<< "ln(n) = " << setprecision(17) << log(n) << endl
	<< "H_n - ln(n) = " << setprecision(17) << (harmonic(n) - log(n)) << endl;
   
	cout << endl;
	return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: harmonic
   Description: return harmonic for number given
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
double harmonic(double n)
{
double sum = 0;

for(double i = 1; i <= n; i++)
{
      sum = sum + (1/i);

      // cout<<sum<<", "; test number code
}
cout<<endl;
   return sum;
}
