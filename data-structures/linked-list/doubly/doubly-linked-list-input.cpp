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

void insert_node_at_tail (Node *&head, Node *&tail, int value) {              // Insert a new node at tail
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

    // Doubly Linked List Input

    Node *head = NULL;
    Node *tail = NULL;

    int value;

    while (true) {
        cin >> value;
        if (value == -1) break;

        insert_node_at_tail(head, tail, value);
    }
    
    cout << "Normal way: ";
    print_normal(head);

    cout << "Reverse way: " ;
    print_reverse(tail);
    return 0;
}