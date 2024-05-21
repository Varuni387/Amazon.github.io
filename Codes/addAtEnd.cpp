#include <bits/stdc++.h>
using namespace std;
// A linked list node
class Node {
public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    // Create a new node
    Node* new_node = new Node();
    new_node->data = new_data;

    // Make the new node point to the current head
    new_node->next = (*head_ref);

    // Update the head to point to the new node
    (*head_ref) = new_node;
}

void append(Node** head_ref, int new_data)
{
    // Create a new node
    Node* new_node = new Node();
    new_node->data = new_data;

    // Store the head reference in a temporary variable
    Node* last = *head_ref;

    // Set the next pointer of the new node as NULL since it will be the last node
    new_node->next = NULL;

    // If the Linked List is empty, make the new node as the head and return
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Else traverse till the last node
    while (last->next != NULL)
        {
        last = last->next;
    }

    // Change the next pointer of the last node to point to the new node
    last->next = new_node;
}
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}
int main()
{

    Node* head = NULL;
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);

    cout << "Created Linked list is: ";
    printList(head);
    append(&head, 1);

    cout << "\nAfter inserting 1 at the end: ";
    printList(head);

    return 0;
}
