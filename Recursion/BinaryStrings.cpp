#include<iostream>
#include<string>
using namespace std; 

void binString(int n, string ans){
    if (n==0){
        cout << ans<<endl; 
        return ; 
    }
    if (ans[ans.size()-1] != '1'){
        binString(n-1, ans+'0');
        binString(n-1, ans+'1');
    }
    else{
        binString(n-1, ans+'0');
    }
}

int main (){
    binString(3, "");
}