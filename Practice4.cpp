/*
 * www.cprogramming.com/tutorial/lesson4.html
 * Lesson 4: Functions
 */

#include <iostream>

using namespace std;

int mult (int x, int y);

int main()
{
  int x, y;
  cout << "Input two numbers: ";
  cin >> x >> y;
  cin.ignore();
  cout << "Product: " << mult(x, y) << endl;
  cin.get();
}

int mult(int x, int y)
{
  return x * y;
}
