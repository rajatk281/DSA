#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include<sstream>
using namespace std; 

string reverseSent(string s){
    stringstream ss(s);
    vector<string> words;
    string word; 
    while(ss>>word){
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string ans; 
    for (int i = 0; i<words.size(); i++){
        ans+=words[i];
        if (i!=words.size()-1){
            ans+=" ";
        }
    }
    return ans; 
}

int main (){
    string s = "the sky is blue"; 
    string ans = reverseSent(s);
    cout<<ans; 
}