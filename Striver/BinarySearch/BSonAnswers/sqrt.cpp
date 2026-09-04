#include<iostream>
#include<vector>
using namespace std; 

int sqrtVal(int num){
    int low=1; 
    int high=num;
    int midVal=1;  
    while(low<=high){
        int mid=low+(high-low)/2;
        if (mid*mid==num){
            return mid;
        }else if (mid*mid<num){
            midVal = mid; 
            low=mid+1; 
        }else{
            high = mid-1;
        }
    }
    return midVal; 
}

int main (){
    cout<<sqrtVal(35);
}