#include<iostream>
using namespace std; 

void firstPattern(int N){
    for (int i =0 ; i <N; i++){
        for (int j=0; j<N; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void secondPattern(int N){
    for (int i =0 ; i <N; i++){
        for (int j=0; j<i+1; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void thirdPattern(int N){
    for (int i =0 ; i <N; i++){
        for (int j=0; j<i+1; j++){
            cout<<" "<<j+1<<" ";
        }
        cout<<endl;
    }
}
void fourthPattern(int N){
    for (int i =0 ; i <N; i++){
        for (int j=0; j<i+1; j++){
            cout<<" "<<i+1<<" ";
        }
        cout<<endl;
    }
}
void fifthPattern(int N){
    for (int i = 0 ; i <N; i++){
        for (int j=N-1; j>=i; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void sixthPattern(int N){
    for (int i = 0 ; i <N; i++){
        for (int j=N-1; j>=i; j--){
            cout<<" "<<N-j<<" ";
        }
        cout<<endl;
    }
}
void sixthPattern(int N){
    for (int i = 0 ; i <N; i++){
        for (int j=N-1; j>=i; j--){
            cout<<" "<<N-j<<" ";
        }
        cout<<endl;
    }
}


int main (){
    sixthPattern(5);
}