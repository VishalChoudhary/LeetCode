class Solution {
public:
    void insertCopyBetween(Node* head){
        Node *temp=head;
        while(temp!=NULL){
            Node *copyNode = new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }
    }
    void connectRandomPointers(Node* head){
        Node *temp=head;
        while(temp!=NULL){
            Node *copyNode = temp->next;
            if(temp->random){
                copyNode->random=temp->random->next;
            }else{
                copyNode->random=NULL;
            }
            temp=temp->next->next;
        }
    }
    Node* clonedList(Node *head){
        Node *dummyNode = new Node(-1);
        Node *temp = head;
        Node *res = dummyNode;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
    Node* copyRandomList(Node* head) {
        insertCopyBetween(head);
        connectRandomPointers(head);
        return clonedList(head);
   }
};