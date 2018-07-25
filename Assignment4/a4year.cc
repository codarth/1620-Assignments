/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Assignment 4 problem 2
  File: a4year.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: display the date given in days of the year
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
using namespace std;

//Function Prototype(s)
class date 
{
   private:
      int d, m, y; // for use in class
      
   public:
      
      bool isLeapYear (int y)
      // ckeck if year is leap
      {
	 if((y % 4 == 0)&&(y % 100 != 0)||(y % 400 == 0))
	 {
	    cout <<endl<<y<<endl;
	    return 1;
	 }
// cout <<endl<<y<<endl; used to see if year was correct
	 return 0;
      }
      
      int nrOfDaysInMonth (int m, int y)
      //Get number of days in month
      {
	 if (m == 2)
	 {
	    if (isLeapYear(y) == 1)
	       return 29;
	    else
	       return 28;
	 }
	 if (m == 4 || m == 6 || m == 9 || m == 11)
	    return 30;
	 
	 return 31;
      }
      
      int dayNumberInYear (int d, int m, int y)
      // Get the day number of the year
      {
	 if (m == 1)
	    return d;
	 // cout <<endl<< d<<" "<<m<<" "<<y<<endl<<endl;
	 //used to check date was coming in right
	 
	 return nrOfDaysInMonth(m-1, y) + dayNumberInYear (d, m-1, y);
      }
};

int main()
{
   
   //Variable Decleration Section
   int d, m, y; // used to get info from user
   date number;
   
   //Get user input section
   cout << " Please enter a date (d m y): ";
   cin >> d >> m >> y;

// Calculation and output section
   cout << d << ":" << m << ":" << y
	<< " is day " << number.dayNumberInYear(d, m, y) << " in year "
	<< y << endl;
   
   
	cout << endl;
	return 0;
}
