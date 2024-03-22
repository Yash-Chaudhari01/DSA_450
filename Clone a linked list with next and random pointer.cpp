class Solution
{
    void Insert(Node * &head ,Node* &tail,int data){
        Node *child = new Node(data);
        if(head == NULL){
            head=child;
            tail=child;
            return ;
        }else{
            tail->next=child;
            tail=child;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node *cloneHead=NULL;
        Node *cloneTail=NULL;
        Node *temp=head;
        
        while(temp != NULL){
          Insert(cloneHead,cloneTail,temp->data);
          temp=temp->next;
        }
        unordered_map<Node *,Node *>oldToNew;
        Node* originalNode=head;
        Node *cloneNode=cloneHead;
        
        while(originalNode != NULL){
            oldToNew[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        
        originalNode=head;
        cloneNode=cloneHead;
        
        while(originalNode != NULL){
          cloneNode->arb=oldToNew[originalNode->arb];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
    }

};
