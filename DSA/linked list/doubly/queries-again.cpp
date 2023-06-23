#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node* prev;
    
    Node (int value) {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
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

void insert_at_head (Node *&head, Node *&tail, int value) {                   // Insert a new node at head
    Node* newNode = new Node(value);                                          // Time complexity = O(1)

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode; 
}

void insert_at_any_position (Node *head, int value, int pos) {                // Insert a new node at any position
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

void insert_at_tail (Node *&head, Node *&tail, int value) {                   // Insert a new node at tail
    Node *newNode = new Node(value);                                          // Time complexity = O(1)

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}


int main () {

    // Queries Again
    // Problem LInk: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-03/challenges/queries-again-1

    Node *head = NULL;
    Node *tail = NULL;

    int q;             // Number of test case
    cin >> q;

    while (q--) {
        int x, v;      // x = Insert index or position & v = Value
        cin >> x >> v;

        if (x == 0) {
            insert_at_head(head, tail, v);

            cout << "L -> ";
            print_normal(head);
            
            cout << "R -> ";
            print_reverse(tail);
        }
        else if (x == size_of_linked_list(head)) {
            insert_at_tail(head, tail, v);

            cout << "L -> ";
            print_normal(head);
            
            cout << "R -> ";
            print_reverse(tail);
        }
        else if (x < size_of_linked_list(head)) {
            insert_at_any_position(head, v, x);
            
            cout << "L -> ";
            print_normal(head);
            
            cout << "R -> ";
            print_reverse(tail);
        
        }
        else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}