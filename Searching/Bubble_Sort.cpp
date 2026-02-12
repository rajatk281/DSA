#include <iostream>
#include <vector>

using namespace std;

// Recursive approach
int binarySearchRec(vector<int> arr, int tar, int st, int end)
{

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (tar < arr[mid])
    {
      binarySearchRec(arr, tar, st, mid - 1);
    }
    else if (tar > arr[mid])
    {
      binarySearchRec(arr, tar,  mid + 1, end);
    }
    else
    {
      return mid;
    }
  }
  return -1;
}

int binarySearch(vector<int> arr, int tar)
{
  int st = 0, end = arr.size() - 1;

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (tar < arr[mid])
    {
      end = mid + 1;
    }
    else if (tar > arr[mid])
    {
      st = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}

int main()
{
  vector<int> table = {2, 4, 6, 8, 10};
  cout << binarySearch(table, 4)<<endl;
  cout << binarySearchRec(table, 6, 0, 4);
}