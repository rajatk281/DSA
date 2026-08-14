#include<iostream>
#include<vector>
using namespace std; 

vector<int> arrLeaders(vector<int> &arr){
    int maxEl = arr[arr.size()-1];
    int i = arr.size()-1; 
    vector<int> result; 
    result.push_back(maxEl);
    i--;
    while(i>=0){
        maxEl = max(maxEl, arr[i+1]);
        if (arr[i]>maxEl){
            result.push_back(arr[i]);
        }
        i--;
    }
    return result; 
}

int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> res = arrLeaders(arr);
    for(int val: res){
        cout<<val<<" ";
    }
}