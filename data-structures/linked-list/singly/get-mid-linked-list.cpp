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

int size(Node *head) {                                  // Find the length of Node 2
    Node *temp = head;

    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void find_list_mid (Node *head, int size) {            // Find middle index
    Node *temp = head;

    int mid_ele = size / 2, j = 0;

    while (j <= mid_ele) {
        if ((size % 2 == 0) && (j == mid_ele || j == mid_ele - 1)) {      // If size of linked list is even then middle element are 2 
            cout << temp->value << " ";
        }
        else if (j == mid_ele){                                           // If size of linked list is odd then middle element is 1
            cout << temp->value;
        }
        j++;
        temp = temp->next;
    }
}

int main () {

    // Find middle index element's value in Linked List
    // Problem link : https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/get-me-mid

    Node *head = NULL;
    Node *tail = NULL;
    
    int value;
    while (true) {
        cin >> value;

        if (value == -1) break;
        
        insert_tail(head, tail, value);
        
    }

    for (Node *i = head; i->next != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->value < j->value) {
                swap(i->value, j->value);
            }
        }
    }

    find_list_mid(head, size(head));
    return 0;
}