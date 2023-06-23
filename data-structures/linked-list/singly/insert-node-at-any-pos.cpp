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
    cout << endl;
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
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

void insert_at_position (Node *head, int pos, int value) {
    Node *newNode = new Node(value);
    
    Node *temp = head;
    for (int i = 1; i < pos-1; i++) {        
        temp = temp->next;
    }
    cout << temp->value << " " << temp << " " << temp->next << " " << newNode->next<< endl;
    newNode->next = temp->next;
    cout << newNode->next << endl;
    temp->next = newNode;
}

int main () {

    // Insert node at any position

    Node *head = NULL;

    while (true) {
        cout << "Option 1: Insert at tail or last" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;
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
            int pos, value;
            cout << "Enter node position: " ;
            cin >> pos;
            cout << "Enter node value: ";
            cin >> value;

            insert_at_position(head, pos, value);
        }
        else if (op == 4) {
            break;
        }
        
    }
    return 0;
}
