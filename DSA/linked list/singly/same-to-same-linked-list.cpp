#include<bits/stdc++.h>
using namespace std;

class Node1 {
    public:
        int value;
        Node1* next;
    
    Node1 (int value) {
        this->value = value;
        this->next = NULL; 
    }
};

class Node2 {
    public:
        int value;
        Node2* next;
    
    Node2 (int value) {
        this->value = value;
        this->next = NULL; 
    }
};

// ---------> Node 1
void print_linekd_list1 (Node1 *head) {                          // Print node 1
    Node1 *temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_tail1 (Node1 *&head, Node1 *&tail, int value1) {     // Insert node 1
    Node1 *newNode = new Node1(value1);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// ---------> Node 2
void print_linekd_list2 (Node2 *head) {                          // Print node 2
    Node2 *temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_tail2 (Node2 *&head, Node2 *&tail, int value2) {     // Insert node 2
    Node2 *newNode = new Node2(value2);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int node1_size1(Node1 *head1) {                                  // Find the length of Node 1
    Node1 *temp = head1;

    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int node2_size2(Node2 *head2) {                                  // Find the length of Node 2
    Node2 *temp = head2;

    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void comapre (Node1 *head1, Node2 *head2) {                     // Comapre both node (Node1 & Node2)
    
    Node1 *temp1 = head1;
    Node2 *temp2 = head2;

    bool isSame = true;

    while (temp1 != NULL) {
        if (temp1->value != temp2->value) {
            isSame = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (isSame == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main () {

    // Same to Same Singly Linked List
    // Problem Link: https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-03/challenges/same-to-same-1

    Node1 *head1 = NULL;
    Node1 *tail1 = NULL;
    
    int value1;
    while (true) {
        cin >> value1;

        if (value1 == -1) break;
        
        insert_tail1(head1, tail1, value1);
        
    }

    Node2 *head2 = NULL;
    Node2 *tail2 = NULL;

    int value2;
    while (true) {
        cin >> value2;

        if (value2 == -1) break;
        
        insert_tail2(head2, tail2, value2);    
    }

    int node1_size = node1_size1(head1);
    int node2_size = node2_size2(head2);

    if (node1_size == node2_size) {
        comapre(head1, head2);
    }
    else {
        cout << "NO" << endl;
    }

    // cout << node1_size << " " << node2_size << endl;

    return 0;

}