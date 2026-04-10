#include<iostream>
using namespace std; 

class Student {

    string name; 
    float cgpa; 

    public:

        // Using same name for two different functions so it is construction overloading 
        Student(){
            cout<<"Constructor without prams is called "<<endl; 
        }
        Student(string name, float cgpa){
            cout<<"Constructor with params is called "<<endl;
            this->name = name ;
            this->cgpa = cgpa ; 
        }
        void getPercentage(){
            cout<<(cgpa*10)<<"% \n";   
        }
        void setName(string newName){
            name = newName;
        }
        void setCgpa(float newCgpa){
            cgpa = newCgpa; 
        }
        string getName(){
            return name ; 
        }
        float getCgpa(){
            return cgpa;
        }
};

int main (){
    Student stud("Dishu Badmosh", 8.9); 
    cout<<stud.getName()<<endl;
    cout<<stud.getCgpa()<<endl;
}