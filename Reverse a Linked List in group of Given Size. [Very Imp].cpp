{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
                if(head== NULL || k<0){
            return NULL;
        }
        struct node* temp =head;
        struct node* pre =NULL;
        struct node* next =NULL;
        int cnt=0;
       while(cnt<k && temp !=NULL){
         next =temp->next;
         temp->next =pre;
         pre =temp;
         temp=next;
         cnt++;
     } 
     head->next =reverseIt(next,k);
     return pre;

    }
};