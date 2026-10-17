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
    bool isPalindrome(ListNode* head) {
        vector<int> reversed;
        vector<int> store;

        ListNode* temp = head; 
        while(temp!=nullptr){
            reversed.push_back(temp->val);
            temp=temp->next; 
        }
        reverse(reversed.begin(), reversed.end());
        ListNode* temp1 = head; 
        while(temp1!=nullptr){
            store.push_back(temp1->val);
            temp1=temp1->next; 
        }
        int idx1 = 0; 
        int idx2 = 0; 
        while(idx1<store.size()){
            if (reversed[idx1]!=store[idx2]) return false; 
            idx1++; 
            idx2++; 
        }
        return true; 
    }
};