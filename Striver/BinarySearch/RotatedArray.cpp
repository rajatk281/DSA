#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// Find how many times the array has been rotated
int rotation(vector<int> nums) {
    int low = 0;
    int high = nums.size() - 1;

    int minVal = INT_MAX;
    int minIndex = -1;

    while (low <= high) {

        // If the current range is already sorted
        if (nums[low] <= nums[high]) {

            if (nums[low] < minVal) {
                minVal = nums[low];
                minIndex = low;
            }

            break;
        }

        int mid = low + (high - low) / 2;

        // Left half is sorted
        if (nums[low] <= nums[mid]) {

            if (nums[low] < minVal) {
                minVal = nums[low];
                minIndex = low;
            }

            low = mid + 1;
        }

        // Right half is sorted
        else {

            if (nums[mid] < minVal) {
                minVal = nums[mid];
                minIndex = mid;
            }

            high = mid - 1;
        }
    }

    return minIndex;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};

    cout << "Array rotated by: " << rotation(arr);

    return 0;
}