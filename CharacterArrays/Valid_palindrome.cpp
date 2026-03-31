#include<iostream>
#include<cstring>
using namespace std; 

bool isPalindrome(char word[], int n){
    int st = 0; 
    int end = n-1; 
    while(st<end){
        if(word[st]!=word[end]){
            return false; 
        }
        st++; 
        end--; 
    }
    return true; 
}

int main () {
    char word[] = "racecar";
    bool result  = isPalindrome(word, strlen(word));
    cout<<result; 
    return 1; 
}