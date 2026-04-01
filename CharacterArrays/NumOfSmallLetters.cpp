#include<iostream>
using namespace std; 

int countSmallLetters(string str){
    int count = 0;
    for(auto val: str){
        if(val>=97 && val<=122){
            count++;
        }
    }
    return count ; 
}

int main () {
    string str = "Apple";
    cout<<countSmallLetters(str);
}