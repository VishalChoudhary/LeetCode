class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast!=0 && fast->next!=0){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};