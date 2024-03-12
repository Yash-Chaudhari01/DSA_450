class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL){
            return false;
        }
        
        
        Node *slow=head;
        Node *fast =head;
        bool flag=true;
        while(flag){
            slow=slow->next;
            fast=fast->next;
             if(fast==NULL){
                return false;
            }
            fast=fast->next;
            
            if(slow==fast){
                return true;
            }
            if(fast==NULL){
                return false;
            }
        }
        
        
        
    }
};