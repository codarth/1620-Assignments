/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Assignment 2, Problem 2
  File: a2leap.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Determain how many leap years are between given dates
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Global Constant(s)

//Function Prototype(s)

int main() {

   //Variable Decleration Section

   int x, y, z;
   
   //Get user input section

   cout<<"Please enter two years to be checked: ";
   cin>>x>>y;
   
   // Calculation and output section
   
// -1 to get the year x included then +1 to display proper year entered
   x=x-1;
   z=((y/4)-(y/100)+(y/400))-((x/4)-(x/100)+(x/400));
   x=x+1;

   cout<< x <<" & "<< y <<" have "<< z <<" leap year(s) between them.";
	cout << endl;
	return 0;
}
