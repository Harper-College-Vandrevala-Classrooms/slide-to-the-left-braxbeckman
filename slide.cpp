#include "shift.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  int numbers[5]{1, 2, 3, 4, 5};
  int *arrPtr = &numbers[0];

  cout << "Numbers before: " << endl;
  for (int i : numbers)
    cout << i << endl;
  cout << endl << endl;

  array_shift(arrPtr, 5, 2);

  cout << "Numbers after: " << endl;
  for (int k : numbers)
    cout << k << endl;
  cout << endl;
}
