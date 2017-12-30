/*
 * www.cprogramming.com/tutorial/lesson13.html
 * Lesson 13: Inline Functions in C++
 *
 * Calling an inline functions add that code to where
 * the coder added the function. This is helpful because
 * the program with all of the code in a single method
 * can be faster then making multiple method calls.
 */

#include <iostream>

using namespace std;

inline int hello()
{
  int x = 2;
  int y = 3;
  int z = x + y;
  return z;
}

int main()
{
  int x = 1;
  int z = hello();
  cout << x << endl;
  cout << z << endl;
}
