/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Add n
  File: a4addn.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Receives a natural number and returns a value.
              Useing a function.
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Global Constant(s)

//Function Prototype(s)
int addAll(int n);

int main()
{

   //Variable Decleration Section

   int n;
   
   //Get user input section

   cout << "Please enter a natural number: ";
   cin >> n;
   
   // Calculation and output section

   if (n <= 0)
      cout << n << " is not a natural number." << endl;
   else
      cout << "S(" << n << "): " << addAll(n) << endl;
	
	cout << endl;
	return 0;
}


int addAll(int n)
// add all numbers from 0 to n
{
   int sum;
   
   if (n==1)
      return n;
   else
   {
      sum = n + addAll(n - 1);
      return sum;
   }  
}
