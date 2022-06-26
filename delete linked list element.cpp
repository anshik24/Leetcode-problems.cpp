 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return head;
    ListNode *curr= head;
        ListNode *prev= nullptr;
        while(curr){
        if(curr->val==val){
            if(!prev)
                head= curr->next;
            else
                prev->next=curr->next;
            
        }
        else
            prev= curr;
            curr= curr->next;
        }
     return head;
    }
    
};
