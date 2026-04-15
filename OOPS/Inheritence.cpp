#include<iostream>
#include<string>
using namespace std;

class Animal {
    public: 
    string name; 
    void eat(){
        cout<<"eats...\n";
    }
    void breath(){
        cout<<"Breath...\n";
    }
};

class Dog : public Animal{
    public :
        void bark(){
            cout<<"Barks...\n";
        }
};

int main (){
    Dog D1; 
    D1.breath();
}