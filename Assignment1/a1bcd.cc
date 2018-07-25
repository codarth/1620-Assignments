/* Cody Crawford
assignment 1 Problem 3
this program converts a double digit number 0-99 to binary.
*/

#include <iostream>
using namespace std;

int main () {

  int number;
  cout << "please input a number from 0-99 to convert to binary: ";
  cin >> number;
  cout << "The conversion of " << number << " to binary is: ";
  
//break up the number
  int tens = number/10;
  int ones =number%10;

  //ten digit to binary
  int last = tens % 2;
  int second = tens / 2;
  int third = second / 2;
  int fourth = third / 2;
  cout << fourth % 2 << third % 2 << second % 2 << last;
 
  // ones digit to binary
  int last2 = ones % 2;
  int second2 = ones / 2;
  int third2 = second2 / 2;
  int fourth2 = third2 / 2;
  cout << fourth2 % 2 << third2 % 2 << second2 % 2 << last2;

  cout << endl;
  return 0;
}
