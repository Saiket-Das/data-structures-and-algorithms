#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
    
    Node (int value) {
        this->value = value;
        this->next = NULL; 
    }
};

void insert_at_head(Node *&head, Node *&tail, int value) {      // Insert node at head

    Node *newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail (Node *&head, Node *&tail, int value) {     // Insert node at tail or end
    Node *newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main () {

    // Queries Linked List
    // Problem link: https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/queries-6

    Node *head = NULL;
    Node *tail = NULL;

    int q;             // Number of test case
    cin >> q;

    while (q--) {
        int x, v;      // x = Insert index or position Head or tail (x = 0, then insert index head otherwise tail) & v = Value
        cin >> x >> v;

        if (x == 0) {
            insert_at_head(head, tail, v);
        }
        else {
            insert_at_tail(head, tail, v);
        }
        cout << head->value << " " << tail->value << endl;
    }

    return 0;
}