/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
Node* removeDuplicates(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head; // No duplicates possible
    }

    std::unordered_set<int> seen;
    Node *current = head;
    Node *prev = nullptr;

    while (current != nullptr) {
        if (seen.find(current->data) != seen.end()) {
            // Duplicate found, remove current node
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
            seen.insert(current->data);
            prev = current;
            current = current->next;
        }
    }

    return head;
}

};'''''''''''''''''