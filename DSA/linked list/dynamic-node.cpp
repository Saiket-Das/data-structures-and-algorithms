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

int main () {

    // Dynamic Node

    // Node head(10);                   // Normal node create
    Node *head = new Node(10);          // Dynamic node create
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    cout << "h: " << head->value << " " << a << " " << head->next << endl; 
    cout << "a: " << a->value << " " << b << " " << a->next << endl;
    cout << "b: " << b->value << " " << "        " << " " << b->next << endl;

    return 0;
}

