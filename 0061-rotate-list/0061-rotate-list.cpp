class Solution {
    ListNode *findKthNode(ListNode *temp,int i){
        int cnt=1;
        while(temp!=NULL){
            if(cnt==i) return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
        return head;
        ListNode *tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len+=1;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode *newLastNode=findKthNode(head,len-k);
        head=newLastNode->next;
        newLastNode->next=NULL;
        return head;
    }
};