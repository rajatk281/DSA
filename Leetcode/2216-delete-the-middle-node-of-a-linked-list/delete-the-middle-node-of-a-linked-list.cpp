/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* middleNodePrev(ListNode* head){
     
        int size = 0 ;
        int mid; 
        ListNode* temp = head; 
        while(temp!=nullptr){
            size++; 
            temp=temp->next; 
        }
        if (size%2==0){
            mid = (size/2)+1; 
        }else{
            mid = (size+1)/2 ; 
        }   

        ListNode* traverse = head; 
        ListNode* prevTraverse = nullptr; 
        while(mid>1){
            prevTraverse = traverse;
            traverse = traverse->next; 
            mid--; 
        }
        return prevTraverse;
    }

    ListNode* deleteMiddle(ListNode* head) {

        if (head==nullptr || head->next==nullptr ) return nullptr; 

        ListNode* midNodePrev = middleNodePrev(head);
        ListNode* midNode = midNodePrev->next; 
        midNodePrev->next = midNode->next; 

        delete midNode; 

        return head; 
    }
};