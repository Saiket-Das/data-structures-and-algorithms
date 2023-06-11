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

    // Printing Singly Linked List

    Node *head = new Node(10);          // Dynamic node
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;


    Node *temp = head;
    while(temp != NULL) {               // Printing Singly Linked List
        cout << temp->value << endl;
        temp = temp->next;
    }

    cout << endl;

    temp = head;
    while(temp != NULL) {
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}