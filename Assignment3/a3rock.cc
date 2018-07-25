/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
  Program title: Rock Paper Scissors
  File: a3rock.cc
  Writen by: Cody Crawford
  School: UofL    Year: 2014    Class: CPCS1620   Prof: Robert Benkoczi
  Descrition: Play a game of rock paper scissors, best of 3.
  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

#include <iostream>
#include <cstdlib> // needed for rand()
#include <ctime> // needed for srand()
using namespace std;

int main() {

   //Variable Decleration Section
   int choice, pcchoice; // for user and pc choice
   string rock, paper; // for output name at srting
   srand(time(0));
   //Get user input section
   cout << "Please enter 1 for rock, 2 for paper, 3 for scissors: ";
   cin >> choice;

// Calculation and output section
   pcchoice = rand() % 3 + 1;

/*Long code
  if (choice == pcchoice)
      cout << "It was a tie!" << endl;
   else
      if ((choice == 1) && (pcchoice == 2))
	 cout <<"PC WINS!!" << endl;
      else
	 if ((choice == 1) && (pcchoice == 3))
	    cout <<"YOU WINS!!" << endl;
	 else
	    if ((choice == 2) && (pcchoice == 3))
	       cout <<"PC WINS!!" << endl;
	    else
	       if ((choice == 2) && (pcchoice == 1))
		  cout <<"YOU WINS!!" << endl;
	       else
		  if ((choice == 3) && (pcchoice == 1))
		     cout <<"PC WINS!!" << endl;
		  else
		     if ((choice == 3) && (pcchoice == 2))
		     cout <<"YOU WINS!!" << endl;
*/

   //short code
   if (choice == pcchoice)
      cout << "Its a tie!" << endl;
   else
      if ((choice == 1) && (pcchoice == 2) ||
	  (choice == 2) && (pcchoice == 3) ||
	  (choice == 3) && (pcchoice == 1) )
	 cout << "PC WINS!!" << endl;
      else
	 cout << "YOU WIN!!" << endl;

   //convert to string
   if (choice == 1)
      rock = "ROCK";
   else
      if (choice == 2)
	 rock = "PAPER";
      else
	 if (choice == 3)
	    rock = "SCISSORS";

   if (pcchoice == 1)
      paper = "ROCK";
   else
      if (pcchoice == 2)
	 paper = "PAPER";
      else
	 if (pcchoice == 3)
	    paper = "SCISSORS";

   // display output
   cout << "Your choice was " << rock << ", PC's choice was "
	<< paper << "!" << endl;

   cout << endl;
   return 0;
}
