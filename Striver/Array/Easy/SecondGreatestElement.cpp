#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std; 

pair<int, int> secGreatElement(vector<int> arr){
    pair<int, int> p;
    sort(arr.begin(), arr.end());
    return  make_pair(arr[arr.size()-2], arr[1]);
}

// Optimized approach 
void optSecGreatElement(vector<int> arr){
    if (arr.size()==1 || arr.size()==0){
        cout<<-1<<" "<<-1<<endl; 
        return; 
    }
    int small=INT_MAX, secondSmall=INT_MAX;
    int great = INT_MIN, secondGreat = INT_MIN; 
    int st=0, end=arr.size()-1;
    int i ; 
    for (i=0; i<arr.size(); i++){
        small = min(small, arr[i]);
        great = max(great, arr[i]);
    }
    for (i=0; i<arr.size(); i++){
        if (arr[i]<secondSmall && arr[i]!=small){
            secondSmall = arr[i];
        }
        if (arr[i]>secondGreat && arr[i]!=great){
            secondGreat = arr[i];
        }
    }
    cout<<"Second Largest value: "<<secondGreat<<endl; 
    cout<<"Second Smallest value: "<<secondSmall<<endl; 
    return ;
}

int main (){
    vector<int> arr = {5, 1, 9, 2, 8};
    optSecGreatElement(arr);   
}