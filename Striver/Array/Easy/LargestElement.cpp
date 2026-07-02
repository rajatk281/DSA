#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int largestElement(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

// Optimised Version 
int optLargestElement(const vector<int>& arr){
    int st = 0;
    int end = arr.size() - 1;
    int grt = arr[0];

    while(st <= end){
        if(arr[st] > grt) grt = arr[st];
        if(arr[end] > grt) grt = arr[end];

        st++;
        end--;
    }

    return grt;
}

int main (){
    vector<int> arr = {1, 7, 3, 12, 10, 6, 4};
    cout<<optLargestElement(arr);
}