#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        string address;
        Node* prev;
        Node* next;
    
    Node (string address) {
        this->address = address;
        this->prev = NULL; 
        this->next = NULL; 
    }
};


void print (Node *head) {                                              // Print doubly linked list in normal way
    Node *temp = head;                                                        // Time complexity = O(N)

    while (temp != NULL) {
        cout << temp->address << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert (Node *&head, Node *&tail, string n) {     // Insert node at tail or end
    Node *newNode = new Node(n);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void visit (Node* head, Node *&curr, string address) {
    Node *temp = head;

    while (temp != NULL) {
        if (temp->address == address) {
            break;
        }
        temp = temp->next;
    }

    if (temp != NULL) {
        curr = temp;
        cout << temp->address << endl;
    }
    else {
        cout << "Not Available" << endl;
    }
}

void prev (Node *&curr) {
    if (curr->prev != NULL) {
        curr = curr->prev;
        cout << curr->address << endl;
    }
    else {
        cout << "Not Available" << endl;
    }
}

void next (Node *&curr) {
    if (curr->next != NULL) {
        curr = curr->next;
        cout << curr->address << endl;
    }
    else {
        cout << "Not Available" << endl;
    }
}

int main () {

    // Browser History
    // Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-03/challenges/browser-history-1

    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        string n;
        cin >> n;
        if (n == "end") break;

        insert(head, tail, n);
    }

    Node *currAddress = head;
    int q;        // q = Queries
    cin >> q;

    while (q--) {
        string keyword;
        cin >> keyword;

        if (keyword == "visit") {
            string address;
            cin >> address;

            visit(head, currAddress, address);
        }
        else if (keyword == "prev") {
            prev(currAddress);
        }
        else if (keyword == "next") {
            next(currAddress);
        }
    }


    return 0;
}