#include <iostream>
#include <climits>

using namespace std;

void MaxSubSum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    MaxSubSum(arr, 6);
}