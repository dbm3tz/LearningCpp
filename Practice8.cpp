/*
 * www.cprogramming.com/tutorial/lesson8.html
 * Lesson 8: Arrays in C and C++
*/

#include <iostream>

using namespace std;

int main()
{
  char astring[10];
  int i;
  cin >> astring;

  for (i = 0; i < 10; i++)
  {
    if (astring[i] == 'a')
    {
      cout << "You entered an a" << endl;
    }
  }

  char * ptr;
  ptr = astring;

  cout << "astring: " << astring << endl;
  cout << "ptr: " << ptr << endl;
}
