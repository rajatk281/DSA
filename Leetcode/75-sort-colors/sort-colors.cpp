class Solution {
public:
    void sortColors(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            int current = arr[i];
            int prev = i - 1;
            while (prev >= 0 && arr[prev] > current) {
                swap(arr[prev], arr[prev + 1]);
                prev--;
            }
        }
    }
};