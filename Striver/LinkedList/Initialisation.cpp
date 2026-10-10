#include<iostream>
#include<vector>
using namespace std; 

class Node{
    int data; 
    Node* next; 
    Node (int data1, Node* next1){
        data = data1; 
        next = next1; 
    }
    Node (int data1){
        data = data1; 
        next = nullptr; 
    }
};

int main (){
    vector<int> arr = {1, 2, 3, 4, 5};
    
}