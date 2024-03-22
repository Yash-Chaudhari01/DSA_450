/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           int size=0;
           Node* temp =head;
           while(temp != NULL){
               temp =temp->next;
               size++;
               
           }
           int steps =size -n;
           if(steps<0){
               return -1;           
               
           }
           int count =0;
           temp =head;
           while(count<steps){
               temp =temp->next;
               count++;
           };
           return temp->data;
    }
};
