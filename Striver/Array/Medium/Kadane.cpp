#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = INT_MIN;
    for (int st = 0; st < nums.size(); st++)
    {
        int currSum = 0;
        for (int end = st; end < nums.size(); end++)
        {
            currSum += nums[end];
            sum = max(currSum, sum);
        }
    }
    cout << sum;
    return sum;
}