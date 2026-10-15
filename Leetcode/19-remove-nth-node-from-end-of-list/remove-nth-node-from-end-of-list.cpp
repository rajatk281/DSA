class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr) return head ;
         
        if (head->next == nullptr){
             
            delete head;  
            return nullptr ;
        }
        int size = 0; 
        ListNode* sizePointer = head; 

        while(sizePointer!=nullptr){
            size++; 
            sizePointer=sizePointer->next; 
        }
        ListNode* removingNode = head; 
        ListNode* prevNode = nullptr; 
        int removingNodeVal = size - n+1; 
        while(removingNodeVal>1){
            removingNodeVal--; 
            prevNode = removingNode;
            // if (removingNode->next == nullptr) break ; 
            removingNode = removingNode->next; 
        }
        if (removingNode==head) {
            head = removingNode->next; 
            delete removingNode; 
            return head; 
        }
        prevNode->next = removingNode->next; 
        delete removingNode; 
        return head;  
    }
};