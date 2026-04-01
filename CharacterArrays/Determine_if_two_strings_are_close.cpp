#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool closeOrNot(string s1, string s2){

    if(s1.length()!=s2.length()) return false; 

    int count1[26] = {0};
    int count2[26] = {0};

    for (char c : s1) count1[c - 'a']++;
    for (char c : s2) count2[c - 'a']++;

    for (int i = 0; i < 26; i++) {
            if ((count1[i] == 0 && count2[i] != 0) || (count1[i] != 0 && count2[i] == 0))
                return false;
        }

    sort(count1, count1 + 26);
    sort(count2, count2 + 26);
    for (int i = 0; i<26; i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    return true;     
}

int main () {
    string s1 = "cabbba";
    string s2 = "abbccc";
    closeOrNot(s1, s2);

}