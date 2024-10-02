#include <iostream>
#include <vector>
using namespace std;

void array_shift_left(int *arr, int size, int shifts)
{
  for (int i = 0; i < shifts; i++)
  {
    int tmp{*(arr + (size - 1))};
    for (int k = size; k > 0; k--)
    {
      *(arr + k) = *(arr + (k - 1));
      if (k == 1)
      {
        *(arr) = tmp;
      }
    }
  }
}


void array_shift_right(int *arr, int size, int shifts)
{
  for (int i = 0; i < shifts; i++)
  {
    int tmp{*(arr)};
    for (int k = 0; k < size; k++)
    {
      *(arr + (k - 1)) = *(arr + k);
      if (k == size - 1)
      {
        *(arr + size - 1) = tmp;
      }
    }
  }
}
