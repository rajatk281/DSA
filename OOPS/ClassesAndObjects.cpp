#include<iostream>
using namespace std; 

class Student {

    // Properties
    string name; 
    public:
        float cgpa; 

        // Methods
        void getPercentage(){
            cout<<(cgpa*10)<<"% \n";   
        }
};

int main (){
    Student s1; 
    s1.cgpa = 9;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
}