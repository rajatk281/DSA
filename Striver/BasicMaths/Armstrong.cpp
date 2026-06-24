#include<iostream>
#include<string>
#include<math.h>
using namespace std; 

void armsStrongCheck(int N){
    int temp ; 
    temp = N; 
    int sum = 0; 
    string s = to_string(N);
    while(temp>0){
        int digit = temp%10; 
        sum += pow(digit, s.length());
        temp/=10; 
    }
    if (sum == N){
        cout<<"Armstrong number"<<endl;
    }else{
        cout<<"Not an armstrong number"<<endl ; 
    }

    return ; 
}

int main (){
    armsStrongCheck(153);
}