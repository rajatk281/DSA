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
int main (){
    vector<int> arr={1, 2, 3, 5};
    cout<< missingNum(arr);
}