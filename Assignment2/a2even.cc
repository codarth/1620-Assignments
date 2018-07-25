/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Assignment 2, Problem 1
  File: a2even.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: find even numbers between two given numbers
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

   cout<<"Please enter two positive integers >0: ";
   cin>>x>>y;
   
   // Calculation and output section

   z=(y/2)-(x-1)/2;

   cout<<"The numbers "<<x<<" and "<<y<<" have "<<z<<" even integers between them."<<endl;
   
   
	cout << endl;
	return 0;
}
