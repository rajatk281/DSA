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
void seventhPattern(int N){
    
    for (int i = 0 ; i<N; i++){
        for (int k = N-(i+1); k>0; k-- ){
            cout<<" ";
        }
        for (int j=1; j<(i+1)*2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void eigththPattern(int N){
    
    for (int i = 0 ; i<N; i++){
        for (int j=(N-i); j<N; j++){
            cout<<" ";
        }
        for (int k = 1; k<((N*2)-(2*i)); k++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ninthPattern(int N){
    
    for (int i = 0 ; i<N; i++){
        for (int k = N-(i+1); k>0; k-- ){
            cout<<" ";
        }
        for (int j=1; j<(i+1)*2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=0; i<N; i++){
        for (int j=(N-i); j<N; j++){
            cout<<" ";
        }
        for (int k = 1; k<((N*2)-(2*i)); k++ ){
            cout<<"*";
        }
        cout<<endl;

    }
}
void tenthPattern(int N){
    for (int i=1; i<=N; i++ ){
        for (int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1; i<=N-1; i++ ){
        for (int j=N-i; j>0; j--){
            cout<<"*";
        }
        cout<<endl; 
    }
}

int main (){
    tenthPattern(10);
}