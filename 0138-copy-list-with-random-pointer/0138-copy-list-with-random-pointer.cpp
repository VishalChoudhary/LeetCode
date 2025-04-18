class Solution {
    void insertCopyBetweenNode(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            Node *copyNode=new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }
    }
    void connectRandomPointer(Node *head){
        Node *temp=head;
        while(temp!=NULL){
            Node *copyNode=temp->next;
            if(temp->random){
                copyNode->random=temp->random->next;
            }
            else{
                copyNode->random=NULL;
            }
            temp=temp->next->next;
        }
    }
    Node *getDeepCloneList(Node *head){
        Node *dummyNode=new Node(-1);
        Node *res=dummyNode;
        Node *temp=head;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
public:
    Node* copyRandomList(Node* head) {
        insertCopyBetweenNode(head);
        connectRandomPointer(head);
        return getDeepCloneList(head);
    }
};