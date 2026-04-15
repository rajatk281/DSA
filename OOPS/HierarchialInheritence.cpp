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

class Puppy : public Animal{           // Multilevel Inheritence
    public: 
        int age = 1;
};

int main (){
    Puppy P1;
    P1.age;
    P1.breath();
    P1.eat();
    P1.name = "Moku ka baccha";
    cout<<P1.name;

}