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

void print_linked_list (Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void insert_at_tail (Node *&head, int v) {
    Node * newNode = new Node(v);

    if (head == NULL) {     // If there is no node
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

    // Insert new node at tail

    Node *head = NULL;

    while (true) {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;

        if (op == 1) {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2) {
            print_linked_list(head);
            cout << endl;
        }
        else if (op == 3) {
            break;
        }
        else {
            break;
        }
    }
    return 0;
}