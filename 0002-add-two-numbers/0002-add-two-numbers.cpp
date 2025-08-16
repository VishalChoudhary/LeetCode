class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyNode = new ListNode(0);
        ListNode * curr = dummyNode;
        int carry = 0;
        ListNode *t1=l1, *t2=l2;
        while(t1!=NULL || t2!=NULL){
            int sum = carry;
            if(t1){
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2){
                sum+=t2->val;
                t2=t2->next;
            } 
            ListNode *newNode = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newNode;
            curr = curr->next;
            if(carry){
                ListNode *newNode = new ListNode(carry);
                curr->next = newNode;
            }
        }
        return dummyNode->next;
    }
};