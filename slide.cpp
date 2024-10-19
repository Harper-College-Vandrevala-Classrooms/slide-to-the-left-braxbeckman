#include "shift.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  //array_shift_left tests
  int numbers1[5]{1, 2, 3, 4, 5};
  int *arrPtr1 = &numbers1[0];
  
  int test1[5]{2, 3, 4, 5, 1};
  int test2[5]{3, 4, 5, 1, 2};

  array_shift_left(arrPtr1, 5, 1);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers1[i] == test1[i]);
  }

  array_shift_left(arrPtr1, 5, 6);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers1[i] == test2[i]);
  }



  //array_shift_right tests
  int numbers2[5]{1, 2, 3, 4, 5};
  int *arrPtr2 = &numbers2[0];

  int test3[5]{5, 1, 2, 3, 4};
  int test4[5]{4, 5, 1, 2, 3};

  array_shift_right(arrPtr2, 5, 1);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers2[i] == test3[i]);
  }
  array_shift_right(arrPtr2, 5, 6);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers2[i] == test4[i]);
  }


  //vector_shift tests
  vector<int> numbers3{1, 2, 3, 4, 5};
  vector<int> *vecPtr = &numbers3;

  vector<int> test5{2, 3, 4, 5, 1};
  vector<int> test6{3, 4, 5, 1, 2};

  vector_shift(vecPtr, 1);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers3[i] == test5[i]);
  }

  vector_shift(vecPtr, 6);
  for (int i = 0; i < 5; i++)
  {
    assert(numbers3[i] == test6[i]);
  }










  // cout << "Numbers before: " << endl;
  // for (int i : numbers)
  //   cout << i << endl;
  // cout << endl << endl;

  // array_shift_right(arrPtr, 5, 5);

  // cout << "Numbers after: " << endl;
  // for (int k : numbers)
  //   cout << k << endl;
  // cout << endl;
}
