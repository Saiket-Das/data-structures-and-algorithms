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

void insert_node_at_head (Node *&head, Node *&tail, int value) {              // Insert a new node at head
    Node *newNode = new Node(value);                                          // Time complexity = O(1)

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_node_at_any_position (Node *head, int value, int pos) {           // Insert a new node at any position
    Node *newNode = new Node(value);                                          // Time complexity = O(N)

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void insert_node_at_tail (Node *&head, Node *&tail, int value, int pos) {     // Insert a new node at tail
    Node *newNode = new Node(value);                                          // Time complexity = O(1)

    if (tail == NULL) {
        insert_node_at_head(head, tail, value);
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

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


    int value, pos;
    cin >> value >> pos;

    if (pos > size_of_linked_list(head)) {                         // Position = 5
        cout << "Invalid" << endl;                                 // Invalid
    }
    else if (pos == 0) {                                           // Value = 100
        insert_node_at_head(head, tail, value);                    // 100 -> 10 -> 20 -> 30 -> 40
    }
    else if (pos == size_of_linked_list(head)) {                   // Value = 100 & Position = 4
        insert_node_at_tail(head, tail, value, pos);               // 10 -> 20 -> 30 -> 40 -> 100
    }
    else {                                                         // Value = 100 & Position = 3
        insert_node_at_any_position(head, value, pos);             // 10 -> 20 -> 30 -> 100 -> 40
    }

    cout << "Normal way: ";
    print_normal(head);

    cout << "Reverse way: " ;
    print_reverse(tail);

    
    return 0;
}