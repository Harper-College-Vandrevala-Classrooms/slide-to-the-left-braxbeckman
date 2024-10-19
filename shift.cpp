#include <iostream>
#include <vector>
using namespace std;

void array_shift_right(int *arr, int size, int shifts)
{
  for (int i = 0; i < shifts; i++)
  {
    int tmp{*(arr + (size - 1))};
    for (int k = size - 1; k > 0; k--)
    {
      *(arr + k) = *(arr + (k - 1));
      if (k == 1)
      {
        *(arr) = tmp;
      }
    }
  }
}


void array_shift_left(int *arr, int size, int shifts)
{
  for (int i = 0; i < shifts; i++)
  {
    int tmp{*(arr)};
    for (int k = 1; k < size; k++)
    {
      *(arr + (k - 1)) = *(arr + k);
      if (k == size - 1)
      {
        *(arr + size - 1) = tmp;
      }
    }
  }
}

void vector_shift(std::vector<int> *vector, int shifts)
{
  int length{};
  length = vector->size();

  for (int i = 0; i < shifts; i++)
  {
    int tmp{vector->at(0)};
    for (int k = 1; k < length; k++)
    {
      vector->at(k-1) = vector->at(k);
      if (k == length - 1)
      {
        vector->back() = tmp;
      }
    }
  }
}