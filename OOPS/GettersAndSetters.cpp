#include<iostream>
using namespace std; 

class Student {

    string name; 
    float cgpa; 

    public:
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
    Student s1; 
    s1.setName("Rahul");
    s1.setCgpa(8.2);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    s1.getPercentage();
}