/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==0)
            return NULL;
        ListNode *temp=0,*prev=0;
        temp=head;
        int size=0;
        while(temp!=0){
            temp=temp->next;
            size++;
        }
        if(n==size)
            return head=head->next;
        int i=1;
        int index=size-n;
        ListNode *curr=head;
        while(i<index){
            curr=curr->next;
            i++;
        }
        curr->next=curr->next->next;
        return head;
    }
};