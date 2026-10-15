class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        vector<int> list; 
        while(temp!=nullptr){
            list.push_back(temp->val);
            temp=temp->next; 
        }
        ListNode* insertVal=head; 
        for (int i = list.size()-1; i>=0; i--){
            insertVal->val = list[i];
            insertVal=insertVal->next; 
        }
        return head; 
    }
};