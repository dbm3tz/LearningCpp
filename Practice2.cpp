/*
 * www.cprogramming.com/tutorial/lesson2.html
 * Lesson 2: If statements in C++
 */

/*
 * Relational Operators:
 * >
 * <
 * >=
 * <=
 * ==
 * !=
 */

/*
 * Boolean Operators:
 * ||
 * &&
 * !
 */

#include <iostream>

using namespace std;

int main()
{
  bool b = true;
  bool c = false;
  if (b) {
    cout << "HERE b" << endl;
  }
  else if (c) {
    cout << "Here c" << endl;
  }
  else {
    cout << "Here d" << endl;
  }
}
