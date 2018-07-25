/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Perfect divisor
  File: a5perfect.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: check the divisors of a number for
  perfect, deficient, or abundant.
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Function Prototype(s)
void proper(int);

int main()
{

   //Variable Decleration Section
   int n;
   
   //Get user input section
   cout << "Please enter an interger: ";
   cin >> n;
   
   // Calculation and output section
   proper(n);
   
   cout << endl;
   return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: proper
   Description: Calculate perfect, deficient, or abundant
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void proper(int n)
{
   int proper = 0;
   for (int i = 1; i < n; i++)
   {
      if (n % i == 0)
	 proper += i;

/*      //test output
      cout << "i: " << i << endl;
      cout << "proper: " << proper << endl;
*/
      
   }
   if(proper == n)
      cout << n << " is Perfect" <<endl;
   else
      if (proper < n)
	 cout << n << " is Deficient" << endl;
      else
	 cout << n << " is Abundant" <<endl;
   
}
