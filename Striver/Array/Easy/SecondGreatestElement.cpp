#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

pair<int, int> secGreatElement(vector<int> arr){
    pair<int, int> p;
    sort(arr.begin(), arr.end());
    return  make_pair(arr[arr.size()-2], arr[1]);
}

// Optimized approach 
pair<int, int> optSecGreatElement(vector<int> arr){
    int minn=arr[0];
    
}

int main (){
    vector<int> arr = {1, 7, 3, 12, 10, 6, 4};
    cout<<secGreatElement(arr).second<<secGreatElement(arr).first<<", ";
}