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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=0,*nextnode=head,*curr=head;
        while(nextnode!=NULL){
            nextnode=nextnode->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        head=prev;
        return head;
    }
};