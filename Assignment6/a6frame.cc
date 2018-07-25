/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Frame
  File: a6frame.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Make a frame out of input integer
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Function Prototype(s)
void frame(int n);

int main()
{

   //Variable Decleration Section
   int n;
   //Get user input section
   cout << "Please enter an integer: ";
   cin >> n;
   
   // Calculation and output section
   frame(n);
   
//	cout << endl;
	return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   Function: frame
   Description: Make a frame from input
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
void frame (int n)
{
   for (int h = 0; h<n; h++)
   {
      for(int i = 0; i<n; i++)
	 if (h == 0 || h == n-1 || i == 0 || i == n-1)
	    cout << '*';
	 else
	    if (h > 0 || h < n-2)
	       cout << " ";
      cout << endl;
   }
}
