/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: City Problem
  File: a2citites.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: figure out what way is shorter, and display how many
         cities visited
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constant(s)

//Function Prototype(s)

int main() {

   //Variable Decleration Section
   int total, start, end,dist1,dist2;

   //get user input
   cout<<"How many total cities are there? ";
   cin>>total;
   cout<<"What is the starting city and ending city? ";
   cin>>start>>end;

   // Calculation and output section

   dist1=abs(start-end)+1;
   dist2=total-dist1+2;

   if (dist1<dist2)
   cout<<"The number of cities visited is "<<dist1;
   else
     cout<<"the number of cities visited is "<<dist2;
	cout << endl;
	return 0;
}
