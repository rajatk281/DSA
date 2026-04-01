#include<iostream>
#include<string>
using namespace std; 

bool SingleSwapString(string s1, string s2){
    if(s1.length()!=s2.length()) return false; 
    int st = 0; 
    int end = s1.length() - 1;
    while (s1[st]==s2[st] && s1.length()>st){
        st++;
    }
    while (s1[end]==s2[end] && end>=0){
        end--;
    }
    swap(s1[st], s1[end]);
    if(s1==s2){
        cout<<"It is a close string";
        return true; 
    }
    cout<<"Not a close string"; 
    return false; 
}

int main () {
    string s1 = "Monkey";
    string s2 = "Monkey";
    SingleSwapString(s1, s2);

}