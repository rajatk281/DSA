#include<iostream>
using namespace std ;

int reverse(int x) {
        long ans=0; 
        while(x!=0){
            int digit = x%10;
            ans=ans*10+digit;
            x=x/10; 
        }
        if(ans>2147483648 || ans<-2147483648){
            return 0;
        }
        else{
            return ans;
        }
    }

int main (){
    cout<<reverse(123);
}