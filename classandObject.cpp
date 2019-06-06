#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    public:
  int scores[5];
  int sum;
  public:
  void input()
  {
    for (int i = 0; i < 5; i++) {
      cin >> scores[i];
      sum += scores[i];
    }
  }
   int calculateTotalScore()
   {
       
       return sum;
       
   }
};
