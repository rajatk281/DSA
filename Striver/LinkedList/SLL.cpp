#include <iostream>
using namespace std;

// Initialisation of LL
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};

// Delete of the kth element
ListNode *KthDeletion(ListNode *&head, int X)
{
    if (head == nullptr)
        return head;

    if (head->data == X)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    ListNode *prev = NULL;
    ListNode *temp = head;

    while (temp != nullptr && temp->data != X)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
        return head;

    prev->next = temp->next;
    delete temp;

    return head;
}
ListNode *KthDeletion(ListNode *&head, int k)
{
    if (head == nullptr)
        return head;

    if (k == 1)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    ListNode *prev = NULL;
    ListNode *temp = head;
    while (temp != nullptr)
    {
        count++;
        if (count == k)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Insertion at head 
ListNode* insertHead(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    newNode->next = head; 
    head = newNode; 
    return head ;
}

// Insertion at tail 
ListNode* insertTail(ListNode* &head, int val){
    if (head==nullptr){
        ListNode* newNode = new ListNode(val);
        newNode->data = val; 
        head = newNode; 
        return head; 
    }
    ListNode* temp = head; 
    while(temp->next!= nullptr){
        temp=temp->next; 
    }
    ListNode* newNode = new ListNode(val);
    temp->next = newNode; 
    newNode->data = val; 
    return head; 
}

int main()
{

}