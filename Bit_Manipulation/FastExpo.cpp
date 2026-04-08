#include<iostream>
using namespace std; 

int fastExpo(int num , int expo){
    int ans = 1;
    while(num>0){
        int lastBit = num&1;
        if(lastBit){
            ans+=ans*expo;
        }
        expo = expo * expo;
        num = num>>1; 
    }
    return ans ; 
}

int main (){
    cout << fastExpo(3, 5);
}