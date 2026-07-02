#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int largestElement(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main (){
    vector<int> arr = {1, 7, 3, 12, 10, 6, 4};
    cout<<largestElement(arr);
}