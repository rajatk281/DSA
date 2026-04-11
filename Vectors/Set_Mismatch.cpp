#include<vector>
#include<iostream>
using namespace std;

vector<int> findErrorNums(vector<int>& v) {
    int duplicate = -1, missing = -1;

    // Step 1: Find duplicate
    for (int i = 0; i < v.size(); i++) {
        int index = abs(v[i]) - 1;
        
        if (v[index] < 0) {
            duplicate = abs(v[i]);
        } else {
            v[index] *= -1;
        }
    }

    // Step 2: Find missing
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0) {
            missing = i + 1;
        }
    }

    return {duplicate, missing};
}