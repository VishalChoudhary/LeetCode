class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode =head, *currNode=head , *prevNode=0;
        while(nextNode!=0){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        return head;
    }
};