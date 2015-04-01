// File: Probability.cpp
// Author: Kyle Fritz
// Date Modified: 4/1/15
// Description: This program takes in a number between 1 and 100, then uses that probability to tell you
//   if what you wanted to happen actually occurred or not

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  char ans = 'y';
  while(ans == 'y')
    {
      int x;
      cout << "Type in the percent out of 100: ";
      cin >> x;
      while (x > 100 || x <= 0)
	{
	  cout << "Percentage must be from 1 to 100";
	  cout << "Try again: ";
	  cin >> x;
	}
      // Gets a random number between 1 and 100
      int num = rand() % 100 + 1;
      // Can uncomment this part to see the num generated
      //cout << num << endl;
      if (num <= x)
	cout << "It works!\n";
      else
	cout << "What?! It doesn't work!\n";
      cout << "Try another move? (y or n)";
      cin >> ans;
    }
}
