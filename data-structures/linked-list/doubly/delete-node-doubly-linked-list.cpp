#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node *prev;
        Node *next;
    
    Node (int value) {
        this->value = value;
        this->next = NULL; 
        this->prev = NULL; 
    }
};

void print_normal (Node *head) {                                              // Print doubly linked list in normal way
    Node *temp = head;                                                        // Time complexity = O(N)

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse (Node *tail) {                                             // Print doubly linked list in reverse way
    Node *temp = tail;                                                        // Time complexity = O(N)
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size_of_linked_list (Node *head) {                                        // Find the size of Linked List
    int i = 0;                                                                // Time complexity = O(N)

    Node *temp = head;
    while (temp != NULL) {
        i++;
        temp = temp->next;
    }
    return i;
}

void delete_head_node (Node *&head) {                                         // Delete head node
    if (head == NULL) {                                                       // Time complexity = O(1)
        cout << "No node availble" << endl;
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void delete_node_at_any_position (Node *head, int pos) {                      // Delete a node at any position
    Node *temp = head;                                                        // Time complexity = O(N)
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }
    
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void delete_tail_node (Node *&tail) {                                         // Delete tail node
    Node *deleteNode = tail;                                                  // Time complexity = O(1)
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

int main () {

    // Doubly Linked List

    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = tail;

    tail->prev = b;


    int  pos;
    cin >> pos;

    if (pos >= size_of_linked_list(head)) {                        // Position = 5
        cout << "Invalid" << endl;                                 // Invalid
    }
    else if (pos == 0) {                                           // Position = 0 & if there is no node then output "No node availble"
        delete_head_node(head);                                    // 20 -> 30 -> 40                    
    }
    else if (pos == size_of_linked_list(head) - 1) {               // Position = 4
        delete_tail_node(tail);                                    // 10 -> 20 -> 30
    }
    else {                                                         // Position = 2
        delete_node_at_any_position(head, pos);                    // 10 -> 20 -> 40
    }

    cout << "Normal way: ";
    print_normal(head);

    cout << "Reverse way: " ;
    print_reverse(tail);

    return 0;
}