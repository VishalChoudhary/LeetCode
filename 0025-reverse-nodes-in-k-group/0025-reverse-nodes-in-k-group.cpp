class Solution {
public:
    ListNode* reverseLL(ListNode *head){
        ListNode *nextNode=head, *curr=head,*prev=NULL;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }        
        head=prev;
        return head;
    }
    ListNode* getKthNode(ListNode *temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        while(temp!=NULL){
            ListNode *kthNode = getKthNode(temp,k);
            if(kthNode==NULL){
                if(prev) prev->next=temp;
                break;
            }
            ListNode *nextNode = kthNode->next;
            kthNode->next=NULL;
            reverseLL(temp);
            if(temp==head){
                head=kthNode;
            }
            else{
                prev->next=kthNode;
            }   
            prev=temp;
            temp=nextNode;
        }
        return head;
    }
};