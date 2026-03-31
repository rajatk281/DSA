#include<iostream>
#include<cstring>
using namespace std; 

void ToUpper(char str[], int n ) {
    for (int i = 0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z'){
            continue; 
        } else {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main () {
    char str[] = "ManGoEhhghghg";
    ToUpper(str, strlen(str));
    cout << str; 
    return 1; 
}