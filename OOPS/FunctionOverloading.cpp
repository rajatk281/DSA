#include<iostream>
using namespace std; 

class Print {
    public: 
        void show(int x ){
            cout << " int : " << x<<endl;  
        }
        void show(string x){
            cout<< "string : "<<x<< endl;
        }
};

int main (){
    Print Pr1; 
    Pr1.show(12);
    Pr1.show("rajat");
}