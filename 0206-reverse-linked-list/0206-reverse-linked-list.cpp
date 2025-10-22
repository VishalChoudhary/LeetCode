class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode=head, *curr=head, *prev=0;
        while(nextNode!=0){
            nextNode=nextNode->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        head=prev;
        return head;
    }
};