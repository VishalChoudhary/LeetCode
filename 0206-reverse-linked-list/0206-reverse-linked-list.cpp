class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* nextNode = head, *currNode = head, *prevNode = NULL;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        head=prevNode;
        return head;
    }
};