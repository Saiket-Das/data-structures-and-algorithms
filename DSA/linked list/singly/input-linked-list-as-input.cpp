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

void print_linked_list (Node *head) {                          // Print all Linked List node
    cout << endl;
    Node *temp = head;

    cout << "Linked list: ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail (Node *&head, int value) {                     // Insert a node at tail or end
    Node * newNode = new Node(value);

    if (head == NULL) {                        // If there is no node, then insert it as head node
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
};


int main () {

    // Insert node from position

    Node *head = NULL;

    while (true) {
        int value;
        cin >> value;

        if (value == -1) {
            print_linked_list(head);
            break;
        };

        insert_at_tail(head, value);        
    }
    return 0;
}
