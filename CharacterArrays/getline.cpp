#include<iostream>
#include <cstring>
using namespace std; 

int main (){
    char sentence[50];
    cin.getline (sentence, 50, '.');
    cout << sentence<<'\n'; 
    cout << strlen(sentence); 
}