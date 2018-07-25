/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Assignment 4 Problem #
  File: a4calendar.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Print out the calendar day for given date.
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <string> //use for output of day and month name
using namespace std;

//Global Constant(s)
//const int FIRST_YEAR = 1900;

//Function/Class

class date // all functions are in the class
{
   private:
      int day, month, year; // used in whole class
      
   public:
      date(int d, int m, int y)
      {
	 day = d;
	 month = m;
	 year = y;
      }
      
      string dayOfTheWeek (int day, int month, int year)
      // determine the day of the week
      {
	 /* int weekDay = ((dayNumberInYear(day, month, year)
			 + (leapsBetween(year) * 366)
			 + (((year - 1900) - leapsBetween(year))*365))
			 % 7);
	 */
	 int weekDay = ((((year-1900)*365) + leapsBetween(year)
			 + dayNumberInYear(day, month, year)) % 7);
	 
	 //temp
	 cout <<"day number of year: "
	      << dayNumberInYear(day, month, year)<<endl
	      <<"leaps Between: "
	      <<leapsBetween(year)<<endl
	      <<"days since 1900: "
	      <<((year - 1900)*365) + leapsBetween(year)
	    + dayNumberInYear(day, month, year)<<endl
	      << "day of week: " <<weekDay<<endl;
	   //end temp
	  	   
	 
	 if (weekDay == 0)
	    return "Sunday";
	 if (weekDay == 1)
	    return "Monday";
	 if (weekDay == 2)
	    return "Tuesday";
	 if (weekDay == 3)
	    return "Wednesday";
	 if (weekDay == 4)
	    return "Thursday";
	 if (weekDay == 5)
	    return "Friday";
	 if (weekDay == 6)
	    return "Saturday";
      }
      
      void printEn(int day, int month, int year)
      // Print out date with english day and month
      {
	 cout << dayOfTheWeek(day, month, year)
	      <<" "<< monthEnglish(month) <<" "<< day
	      << ", " << year << endl;
	
      }
      string monthEnglish (int month)
      // get month in English
      {
	 if (month == 1)
	    return "January";
	 if (month == 2)
	    return "February";
	 if (month == 3)
	    return "March";
	 if (month == 4)
	    return "April";
	 if (month == 5)
	    return "May";
	 if (month == 6)
	    return "June";
	 if (month == 7)
	    return "July";
	 if (month == 8)
	    return "August";
	 if (month == 9)
	    return "September";
	 if (month == 10)
	    return "October";
	 if (month == 11)
	    return "November";
	 if (month == 12)
	    return "December";
      }
      
      
/* used to check numbers
   
int nrOfDaysInMonth (int m, int y);
int dayNumberInYear (int d, int m, int y);
bool isLeapYear (int y);
int leapsBetween (int y);

*/    
      
      
      bool isLeapYear (int y)
      //check if year is leap
      {
	 if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	    return 1;
	 return 0;
      }
      
      int dayNumberInYear (int d, int m, int y)
      // get the day of the year
      {
			 
	 if (m == 1)
	    return d;
	 return nrOfDaysInMonth(m-1, y) + dayNumberInYear(d, m-1, y);
      }
      
      int nrOfDaysInMonth (int m, int y)
      // get number of days in month
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
      
      int leapsBetween (int y)
      //get number of leap years between 1900 and given year
      {
	 int x = 1900;
	 x=x-1;
	 if (isLeapYear(y) == 1)
	    return (((y/4)-(y/100)+(y/400))-((x/4)-(x/100)+(x/400))-1);
	 return ((y/4)-(y/100)+(y/400))-((x/4)-(x/100)+(x/400));
      }
      
      
};


int main()
{
   
   //Variable Decleration Section
   int d, m, y; // for input from user
   date fullDate(d, m, y); // declare to call function
   
//Get user input section
   cout << "Please enter a date (day month year): ";
   cin >> d >> m >> y;
   
   // Calculation and output section
   fullDate.printEn (d, m, y);

   cout << endl;
   return 0;
}
