class Solution {
    ListNode *reverseLL(ListNode *head){
        ListNode *nextnode=head, *curr=head, *prev=NULL;
        while(nextnode!=NULL){
            nextnode=nextnode->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        head=prev;
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *newhead=reverseLL(slow->next);
        ListNode *first=head,*second=newhead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverseLL(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newhead);
        return true;
    }
};