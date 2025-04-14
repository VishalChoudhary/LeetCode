class Solution {
public:
    ListNode *reverseLL(ListNode *head){
        ListNode *nextnode=head, *curr=head, *prev=NULL;
        while(nextnode!=NULL){
            nextnode=nextnode->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *newHead = reverseLL(slow->next);
        ListNode *first=head;
        ListNode *second=newHead;
        while(second!=NULL){
            if(first->val != second->val){
                reverseLL(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverseLL(newHead);
        return true;
    }
};