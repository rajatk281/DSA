#include<iostream>
#include<vector>
using namespace std ; 

vector<int> PairSum(vector<int> v, int target){
    int st=0; 
    int end=v.size()-1;
    while(st<end){
        if (v[st] + v[end] == target) {
            vector<int> result = {st, end};
            return result; 
        }
        else if(v[st] + v[end] < target){
            st++;
        }
        else{
            end--;
        }
    }
    return {};
}

int main () {
    vector<int> vec= {2, 11, 7, 15};
    vector<int> result = PairSum(vec, 9);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}