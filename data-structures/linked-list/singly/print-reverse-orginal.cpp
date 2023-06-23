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

void insert_tail (Node *&head, Node *&tail, int value) {     // Insert node at tail or end
    Node *newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node *temp) {     // Print reverse way
    if (temp == NULL) return;        // Base case

    print_reverse(temp->next);
    cout << temp->value << " ";      // Output
}

void print_orginal(Node *temp) {     // Print orginal way
    if (temp == NULL) return;        // Base case

    cout << temp->value << " ";      // Output
    print_orginal(temp->next);
}

int main () {

    // Print the Linked List in Reverse and Orginal
    // Problem link: https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/reverse-and-original

    Node *head = NULL;
    Node *tail = NULL;
    
    int value;
    while (true) {
        cin >> value;

        if (value == -1) break;
        
        insert_tail(head, tail, value);
        
    }

    print_reverse(head);
    cout << endl;
    print_orginal(head);
    return 0;
}