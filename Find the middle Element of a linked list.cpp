class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
           temp=temp->next;
           count++;
        }
        temp=head;
        int num=(count/2)+1;
        count=0;
        while(count<num-1){
        temp=temp->next;
         count++;
        }
        return temp;
    }
};
