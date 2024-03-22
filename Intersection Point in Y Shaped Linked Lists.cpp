

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.

int intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    
    // Calculate the size of the two linked lists
    int size1 = 0, size2 = 0;
    bool flag = false;
    int steps = 0;
   Node *temp1=head1;
   Node *temp2=head2;
    // Calculate the size of the first linked list
    while (head1 != NULL) {
        head1 = head1->next;
        size1++;
    }
    head1=temp1;

    // Calculate the size of the second linked list
    while (head2 != NULL) {
        head2 = head2->next;
        size2++;
    }
head2=temp2;
    // Determine the difference in sizes and set a flag
    if (size1 < size2) {
        steps = size2 - size1;
        flag = true;
    } else {
        steps = size1 - size2;
    }

    // Move the pointer of the longer list ahead by the difference in sizes
    if (flag) {
        while (steps != 0) {
            head2 = head2->next;
            steps--;
        }
    } else {
        while (steps != 0) {
            head1 = head1->next;
            steps--;
        }
    }

    // Traverse both lists until an intersection point is found
    while (head1 != NULL && head2 != NULL) {
        if (head1 == head2) {
            return head1->data; // Intersection point found
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    return -1; // No intersection point found
} 

