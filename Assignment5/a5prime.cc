/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Prime
  File: a5prime.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Check number if prime
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Function Prototype(s)
void prime(int);

int main()
{
   
   //Variable Decleration Section
   int n;
   
   //Get user input section
   do
   {
      cout << "Please enter a positive integer (neg to quit): ";
      cin >> n;
      
      // Calculation and output section
      if (n > 0)
      {
      prime (n);
      cout << endl;
      }
   }
   while (n > 0);
   
   cout << endl;
   return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: prime
   Description: Check if prime
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void prime(int n)
{
   int prime = 0;
   
   for (int i = 1; i < n/2; i++)
   {
      if (n % i == 0)
	 prime += i;
      
/*      //output test
	cout << "i: " << i << endl;
	cout << "prime: " << prime << endl;
*/
      
   }
   if (prime == 1)
      cout << n << " is prime";
   else
      cout << n << " is not prime";
}
