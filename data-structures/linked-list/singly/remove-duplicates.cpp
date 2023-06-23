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

void insert (Node *&head, Node *&tail, int value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void sort_list(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
}

void remove_dupli (Node *&head) {

    if (head == NULL) return;

    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->value == temp->next->value) {
            temp->next = temp->next->next; 
        }

        if (temp->next == NULL) {
            break;
        }
        else if (temp->value != temp->next->value) {
            temp = temp->next;
        }
    }
} 

void print (Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main () {                  // Time Complexity - O(N^2)

    // Remove Duplicates
    // Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-03/challenges/remove-duplicated-i

    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (true) {
        cin >> value;
        if (value == -1) break;
        
        insert(head, tail, value);
    }

    sort_list(head);          // Sort the list (Time Complexity - O(N^2))
    remove_dupli(head);       // Remove duplicate value from list (Time Complexity - O(N))

    print(head);              // Output 

    return 0;
}