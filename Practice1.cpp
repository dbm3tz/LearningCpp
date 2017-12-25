/*
 * www.cprogramming.com/tutorial/lesson1.html
 * Lesson 1: The basics of C++
 */

/* Create comments like this (Block) */
// Or like this (Line)

// #include is a directive
// #include is a preprocessor directive
// Takes everything in the header and pastes it into the program
#include <iostream>

// Tells compiler to use a group of functions that are part of the
// standard library
using namespace std;

// Return value of zero means success and is returned by main
// automatically
int main()
{
  // Print output to the screen
  cout << "Hello World" << endl;

  // C++ datatypes
  bool a = true;
  char b = 'a';
  int c = 16;
  float d = 3.28;
  double e = 4.32;

  int number;
  cout << "Please enter a number: ";
  cin >> number;
  // Input also includes enter keystroke so remove the last character0
  cin.ignore();
  cout << "You entered: " << number << "!" << endl;

  // Operators: *, -, +, =, ==, >, <

  // Makes program wait for enter key to exit
  cin.get();
}
