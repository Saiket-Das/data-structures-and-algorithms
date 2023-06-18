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

void print_linekd_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

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

void find_min_max (Node *head) {                             // Find the min max

    Node *temp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while (temp != NULL) {
        if (temp->value < mn) {
            mn = temp->value;
        }
        if (temp->value > mx) {
            mx = temp->value;
        }
        temp = temp->next;
    }
    cout << mx << " " << mn;
}

int main () {

    // Find Max Min from Singly Linked List
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/max-min-9

    Node *head = NULL;
    Node *tail = NULL;
    
        int value;
    while (true) {
        cin >> value;

        if (value == -1) break;
        
        insert_tail(head, tail, value);
        
    }
    find_min_max(head);
    return 0;
}