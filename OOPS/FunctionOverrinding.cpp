#include<iostream>
using namespace std;

class Human {
    public:
        int age = 21;
        void speak(){
            cout<<"Hello there I am human ";
        }
};

class Student : public Human{
    public:
    void speak(){
        cout<<"Hello there I am student";
    }
};

int main(){
    Student s1;
    s1.speak();
}