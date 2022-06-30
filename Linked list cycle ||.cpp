class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast= head;
        ListNode* slow= head;
        if(slow==NULL && fast==NULL)
            return NULL;
        while(fast!=NULL   && fast->next!= NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                while(head!= fast){
                    fast=fast->next;
                    head=head->next;
                }
                return head;
            }
        }
        return NULL;
    }
};
