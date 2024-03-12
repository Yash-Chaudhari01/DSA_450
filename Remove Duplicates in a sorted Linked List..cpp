Node *removeDuplicates(Node *head)
{
    
    Node *first = head;
    Node *second = head->next;
    
    while (second != NULL)
    {
        while (second != NULL && (first->data == second->data))
        {
            second = second->next;
        }

        if (second == NULL)
        {
            first->next = NULL;
            return head;
        }

        first->next = second;
        second = second->next;
        first = first->next;
    }

    return head;
}