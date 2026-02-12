#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;

    while (st <= end)
    { // searching until the last condition of searching
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[st] <= nums[mid])
        { // Left array is sorted
            if (nums[st] <= target && target <= nums[mid])
            { // Element is in left sorted array
                end = mid - 1;
            }
            else
            { // Element is in right sorted array
                st = mid + 1;
            }
        }

        else
        { // Right array is sorted
            if (nums[mid] <= target && target <= nums[end])
            { // Element is in right sorted array
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

using namespace std;

int main()
{
    vector<int> table = {12, 2, 4, 6, 8, 10};
    cout<<search(table, 2);
}