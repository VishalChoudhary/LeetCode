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
    ListNode *getKthNode(ListNode *temp, int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prevnode=NULL;
        while(temp!=NULL){
            ListNode *knode=getKthNode(temp,k);
            if(knode==NULL){
                if(prevnode) prevnode->next=temp;
                break;
            }
            ListNode *nextnode=knode->next;
            knode->next=NULL;
            reverseLL(temp);
            if(temp==head)
            head=knode;
            else{
                prevnode->next=knode;
            }
            prevnode=temp;
            temp=nextnode;
        }
        return head;
    }
};