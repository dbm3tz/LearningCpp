/*
 * www.cprogramming.com/tutorial/lesson6.html
 * Lesson 6: Pointers in C++
 */

#include <iostream>

using namespace std;

int main()
{
  int x;
  int * p;

  p = &x;
  cout << "x: ";
  cin >> x;
  cin.ignore();
  cout << "*p: " << *p << endl;

  int * ptr = new int;
  *ptr = 6;
  cout << "ptr: " << ptr << endl;
  cout << "*ptr: " << *ptr << endl;
  delete ptr;
}
