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

void reverse (Node *&head, Node *curr) {
    if (curr->next == NULL) {
        head = curr;
        return;
    };

    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
} 

void print (Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main () {                  // Time Complexity - O(N^2)

    // Palindrome
    // Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-03/challenges/palindrome-262-2

    Node* head = NULL;
    Node* tail = NULL;

    Node* copyHead = NULL;
    Node* copyTail = NULL;

    int value;
    while (true) {
        cin >> value;
        if (value == -1) break;
        
        insert(head, tail, value);              // Main list
        insert(copyHead, copyTail, value);      // Duplicate list
    }

    reverse (copyHead, copyHead);               // Reverse duplicate list 
    
    bool isPalindrome = true;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->value != copyHead->value) {
            isPalindrome = false;
            break;
        }
        temp = temp->next;
        copyHead = copyHead->next;
    }

    if (isPalindrome == false) cout << "NO";
    else                       cout << "YES";

    return 0;
}