#include<iostream>
#include<vector>
using namespace std; 

int missingNum(vector<int> arr){
    int range = arr.size()+1;
    vector<int> hashArray(arr.size()+2, 0);
    for (int i=0; i<arr.size(); i++){
        hashArray[arr[i]]++; 
    } 
    for (int i=1; i<hashArray.size();i++ ){
        if(hashArray[i]==0){
            return i; 
        }
    }
    return -1; 

}

int OptMissingNum(vector<int> arr){
    int giveNum = 0; 
    long long expectedSum = 0; 
    for (int i=0; i<arr.size(); i++){
        giveNum+=arr[i];
    }
    for (int i=1; i<=arr.size()+1; i++){
        expectedSum+=i; 
    } 
    int missingNum = expectedSum-giveNum; 
    return missingNum; 
}

int main (){
    vector<int> arr={8, 2, 4, 5, 3, 7, 1};
    cout<< OptMissingNum(arr);
}