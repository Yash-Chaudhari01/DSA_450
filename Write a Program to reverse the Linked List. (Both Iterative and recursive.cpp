class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node *pre= NULL;
        Node *curr =head;
        Node *forward =NULL;
        while(curr!=NULL){
            forward =curr->next;
            curr->next =pre;
            pre=curr;
            curr =forward;
        }
        return pre;
    }
    
};