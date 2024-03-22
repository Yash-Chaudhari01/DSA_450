//User function template for C++

/* 

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

Node *reverseLL(Node* head){
    Node *pre =NULL;
    Node *curr =head;
    Node *next =curr->next;
    if(head== NULL || head->next ==NULL){
        return head;
    }
    while(curr != NULL){
        next =curr->next;
        curr->next =pre;
        pre=curr;
        curr = next;
    }
    return pre;
}
class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        int carry=1;
         Node *temp =NULL;
         temp=reverseLL(head);
         Node *header =temp;
         while((temp !=NULL) && carry!=0){
             int sum = (temp->data)+carry;
             if(sum>9){
                 temp->data=0;
                 carry=1;
             }
             else{
                 temp->data=sum;
                 carry=0;
                 break;
             }
             temp=temp->next;
         }
         Node *finalAns = reverseLL(header);
         if(carry ==1){
             Node *ouput=new Node(1);
             ouput->next=finalAns;
             return ouput;
         }
         return finalAns;
    }
};