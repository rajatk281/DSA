//  Create a user class with the properties : id(private), username(public) & password(private). It should be initialized in a parameterized constructor. It should a getter and setter for password

#include<iostream>
#include<string>
using namespace std ; 

class Person {
    int id ;
    int password;
    public:
        string username;
        Person (string name, int newPassword){
            username = name ;
            password = newPassword; 
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
    cout<<P2.getPassword()<<endl;
    cout<<P1.username;  
}
