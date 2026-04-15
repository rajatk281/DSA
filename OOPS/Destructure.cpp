#include<iostream>
#include<string>
using namespace std ; 

class Car {
    int id; 
    public :
        string name ; 
        string color ; 
        int* mileage; 
    Car(string name, string color){
        this->name  = name ; 
        this->color = color ; 
        mileage = new int ; 
        *mileage = 12; 
    }
    void setId(int id){
        this->id = id; 
    }
    int getId(){
        cout<<"Id : "<<id<<endl; 
    }
    ~Car(){                         // Freeing heap memory 
        cout<<"Deleting...";
        if(mileage != NULL){
            delete mileage; 
            mileage = NULL;
        }
    }

};
int main (){
    Car C1("Bugati", "Red");
    C1.setId(67);
    C1.getId();
}