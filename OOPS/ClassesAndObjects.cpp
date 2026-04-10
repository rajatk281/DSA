#include<iostream>
using namespace std; 

class Student {

    // Properties
    string name; 
    float cgpa; 

    // Methods
    void getPercentage(){
        cout<<cgpa*100; 
    }
};

int main (){
    Student s1; 
    cout<<sizeof(s1);
}