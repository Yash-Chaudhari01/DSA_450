{
    public:
    //Function to remove a loop in the linked list.
        void removeLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while( fast != NULL && fast -> next != NULL ) {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if( slow == fast ) break;
        }
        if(fast == NULL && fast->next == NULL){
            return ;
        }
        
        slow = head;
        while( slow -> next != fast -> next ){
            slow = slow -> next;
            fast = fast -> next;
        }
        fast -> next = NULL;
    }

};