class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
            return nullptr;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        
        while(temp!=nullptr){
            if(temp->next!=nullptr && temp->val==temp->next->val){
                while(temp->next!=nullptr && temp->val==temp->next->val){
                    temp=temp->next;
                }
            prev->next=temp->next;
            }
else{
    prev=prev->next;
}
    
                temp=temp->next;
            }
        return dummy->next;
    }
    
};
