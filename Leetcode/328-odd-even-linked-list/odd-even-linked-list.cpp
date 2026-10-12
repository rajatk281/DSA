class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head==nullptr) return head;
        if (head->next == nullptr) return head; 

        map<int, int> mp;
        ListNode* temp = head; 
        int idx = 0;

        while(temp!=nullptr){
            idx++;
            mp[idx] = temp->val; 
            temp=temp->next;
        }

        ListNode* temp1 = head; 

        while(temp1!=nullptr){
            for(auto it: mp){
                if (it.first%2!=0){
                    temp1->val = it.second; 
                    temp1 = temp1->next ; 
                }
            }
            for(auto it: mp){
                if (it.first%2==0){
                    temp1->val = it.second; 
                    temp1 = temp1->next ; 
                }
            }
        }
        return head; 
    }
};