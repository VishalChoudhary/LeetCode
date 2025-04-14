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
    ListNode *getKthNode(ListNode *temp,int k){
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
        ListNode *prev=NULL;
        while(temp!=NULL){
            ListNode *kthNode=getKthNode(temp,k);
            if(kthNode==NULL){
                if(prev) prev->next=temp;
                break;
            }   
            ListNode *nextnode=kthNode->next;
            kthNode->next=NULL;
            reverseLL(temp);
            if(temp==head)
                head=kthNode;  
            else
                prev->next=kthNode;
            prev=temp;
            temp=nextnode;     
        }
        return head;
    }
};