class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        if(head == NULL){
            return -1;
        }
        map<Node* ,bool >visited;
        Node *temp=head;
        while(temp != NULL && temp->next != NULL){
            if(visited[temp]==true){
                return temp->data;
            }
            visited[temp]=true;
            temp=temp->next;
            
        }
        return -1;
    }
};