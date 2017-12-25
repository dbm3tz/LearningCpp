/*
 * www.cprogramming.com/tutorial/lesson7.html
 * Lesson 7: Structures in C++
 *
 *
*/

#include <iostream>

using namespace std;

struct s {
  int x;
};

struct s generateStruct(int x);

int main()
{
  struct s s1 = generateStruct(1);
  struct s s2;
  struct s * s3;

  s3 = &s2;
  s2.x = 2;

  cout << "s1.x: " << s1.x << endl;
  cout << "s2.x: " << s2.x << endl;
  cout << "s3->x: " << s3->x << endl;
}

struct s generateStruct(int x)
{
  struct s s1;
  s1.x = x;
  return s1;
}
