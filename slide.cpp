#include "shift.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  int test1[5]{2, 3, 4, 5, 1};
  int test2[5]{4, 5, 1, 2, 3};
  int test3[5]{5, 1, 2, 3, 4};

  int numbers[5]{1, 2, 3, 4, 5};
  int *arrPtr = &numbers[0];


  array_shift_right(arrPtr, 5, 1);

  for (int i = 0; i < 5; i++)
  {
    assert(numbers[i] == test1[i]);
  }


  array_shift_right(arrPtr, 5, 2);

  for (int i = 0; i < 5; i++)
  {
    assert(numbers[i] == test2[i]);
  }


  array_shift_right(arrPtr, 5, 6);

  for (int i = 0; i < 5; i++)
  {
    assert(numbers[i] == test3[i]);
  }
}
