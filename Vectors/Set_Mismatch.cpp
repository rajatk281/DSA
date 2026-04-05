#include<iostream>
#include<vector>
using namespace std; 

vector<int> missingNum(vector<int> v){
    int duplicate = -1, missing = -1;
    for (int i=0; i<v.size(); i++){
        int index = abs(v[i])-1;
        if(v[index]<0){
            duplicate=abs(v[index]);
        }
        else{
            v[index]*=-1;
        }
        for (int i=0; i<v.size(); i++){
            if(v[i] > 0){
                missing = i+1;
            }
        }   
        for (int i=0; i<v.size(); i++){
            if(v[i] > 0){
                missing = i+1;
            }
        }   
    }
    return {duplicate, missing};
}

int main (){
    vector<int> v = {1, 1, 2, 3, 4};
    vector<int> result = missingNum(v);

    cout << "Duplicate: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;
}