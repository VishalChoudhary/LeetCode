class Solution {
public:
    ListNode* getKthNode(ListNode *temp,int len){
        int cnt=1;
        while(temp!=NULL){
            if(cnt==len) return temp;
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
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
        ListNode *newNode = getKthNode(head,len-k);
        head=newNode->next;
        newNode->next=NULL;
        return head;
    }
};