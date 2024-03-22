/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
public:
    Node* reverseLL(Node* head) {
        Node* pre = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        return pre;
    }

    Node* addTwoLists(Node* first, Node* second) {
        Node* L1 = reverseLL(first);
        Node* L2 = reverseLL(second);

        Node* ans = NULL;
        Node* temp = NULL;
        int carry = 0;

        while (L1 != NULL || L2 != NULL) {
            int x = (L1 != NULL) ? L1->data : 0;
            int y = (L2 != NULL) ? L2->data : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            Node* newNode = new Node(sum % 10);
            
            if (ans == NULL) {
                ans = temp = newNode;
            } else {
                temp->next = newNode;
                temp = temp->next;
            }

            if (L1 != NULL) L1 = L1->next;
            if (L2 != NULL) L2 = L2->next;
        }

        if (carry > 0) {
            temp->next = new Node(carry);
        }

        return reverseLL(ans);
    }
};
