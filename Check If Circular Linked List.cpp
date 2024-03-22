

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node *slow=head;
   Node *fast=head;
   while(fast != NULL && fast->next != NULL){
       slow =slow->next;
       if(fast->next != NULL){
           fast=fast->next->next;

       }
       if(slow == fast){
           return 1;
       }
   }
   return 0;
}