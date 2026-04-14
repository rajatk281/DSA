
#include<iostream>
#include<string>
using namespace std ; 

class Person {
    int id ;
    int password;

    public:
        string username;
        int *mileage;
        Person (string name, int newPassword){          
            username = name ;
            password = newPassword;
            mileage = new int ;                         // Dynamic alllocation 
            *mileage = 12;
        }

        Person (Person &original){
            cout<<"copying original to new \n";
            username = original.username;
            password = original.password;
            id = original.id;
            mileage = new int ;
            *mileage = *original.mileage;
        }

        void setPassword (int newPass){
            password = newPass;
        }
        int getPassword(){
            return password;
        }
};

int main (){
    Person P1("Rajat", 12345);
    Person P2(P1);                  // Making copy constructor 
    // cout<<P2.getPassword()<<endl;
    
    // cout<<P1.username;
    *P2.mileage = 10; 
    cout<<*P2.mileage<<endl;
    *P1.mileage = 12; 
    cout<<*P1.mileage<<endl;
    

}
