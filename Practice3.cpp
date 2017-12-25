/*
 * www.cprogramming.com/tutorial/lesson3.html
 * Lesson 3: Loops
 */

#include <iostream>

using namespace std;

int main()
{
  for (int i = 0; i < 5; i++) {
    cout << "for: " << i << endl;
  }

  int i = 0;
  while (i < 5) {
    cout << "while: " << i << endl;
    i++;
  }

  int j = 0;
  do {
    cout << "do while: " << j << endl;
    j++;
  } while(j < 5);
}
