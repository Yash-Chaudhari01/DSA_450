//User function Template for C++

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head ==NULL || head->next ==NULL){
            return head;
        }
        ListNode *ans=new ListNode(-1);
         ans->next=head;
         ListNode *pre = NULL;
         while(head->next != NULL){
             pre=head;
             head=head->next;
             
         }
       ans->val=head->val;
       pre->next=NULL;
       return ans;
        
    }
};