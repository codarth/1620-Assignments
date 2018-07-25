/* Cody Crawford
assignment 1 Problem 2
this program converts a digit 0-9 to binary.
*/

#include <iostream>
using namespace std;

int main () {

  int number;
  cout << "please input a number from 0-9 to convert to binary: ";
  cin >> number;
  cout << "The conversion of " << number << " to binary is: ";
  int last = number % 2;
  int second = number / 2;
  int third = second / 2;
  int fourth = third / 2;
cout << fourth % 2 << third % 2 << second % 2 << last;

  cout << endl;
  return 0;
}
