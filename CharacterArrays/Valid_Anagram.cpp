#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

bool ValidAnagram(string s1, string s2) {
    if(s1.length() != s2.length()){
        cout<<"Not a valid Anagram";
        return false; 
    }

    int count[26] = {0};
    for(int i = 0; i<s1.length(); i++){
        int idx = s1[i]-'a';
        count[idx]++;
    }
    for(int i = 0; i<s2.length(); i++){
        int idx = s2[i]-'a';
        if(count[idx] == 0){
            cout<<"Not a valid anagram";
            return false; 
        }
        count[idx]--;
    }
    cout<<"Valid Anagram";

    return true; 
}

int main () {
    string str1 = "amagram";
    string str2 = "nagaram"; 
    ValidAnagram(str1, str2);
    return 1; 

}