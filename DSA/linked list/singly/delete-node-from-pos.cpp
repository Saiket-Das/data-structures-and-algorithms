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
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail (Node *&head, int v) {                     // Insert a node at tail or end
    Node * newNode = new Node(v);

    if (head == NULL) {                        // If there is no node, then insert it as head node
        head = newNode;
        cout << endl << "Head node inserted" << endl << endl;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    cout << endl << "New node inserted at tail or end" << endl << endl;
};

void insert_at_position (Node *head, int pos, int value) {     // Insert a new node in given position
    Node *newNode = new Node(value);
    
    Node *temp = head;
    for (int i = 1; i < pos-1; i++) {      // Find the previous node of insert node's position    
        temp = temp->next;
        if (temp == NULL) {
            cout << endl << "Invalid index" << endl << endl;
            return;
        }
    }
    newNode->next = temp->next;           // Link the new node with the current position's insert node  
    temp->next = newNode;                 // Link the previous node with new node

    cout << endl << "New node added at " << pos << " position" << endl << endl;

}

void insert_at_head (Node *&head, int value) {                 // Insert a new node as head node 
    Node *newNode = new Node(value);
    
    newNode->next = head;                  // Link new head node with current head node 
    head = newNode;                        // Set the new node as current node

    cout << endl << "New node added at head position" << endl << endl;

}

void delete_from_position (Node *head, int pos) {              // Delete the given position's node
    Node *temp = head;                 
    for (int i = 1; i < pos-1; i++) {      // Find the previous node of delete node
        temp = temp->next;
        if (temp == NULL) {
            cout << endl << "Invalid index" << endl << endl;
            return;
        }
    }

    if (temp->next == NULL) {
        cout << endl << "Invalid index" << endl << endl;
        return;
    }
    Node *deleteNde = temp->next;          // Save the node we want to delete
    temp->next = temp->next->next;         // Link previous node of delete node with next node of delete node
    delete deleteNde;                      // Delete the node

    cout << endl << pos <<" position's node deleted" << endl << endl;
}

void delete_head (Node *&head) {                               // Delete the head node
    if (head == NULL) {
        cout << endl << "Head node is not available" << endl << endl;
        return;
    }
    Node *deleteNde = head;          // Save the node we want to delete
    head = head->next;         // Link previous node of delete node with next node of delete node
    delete deleteNde;                      // Delete the node

    cout << endl << "Head node deleted" << endl << endl;
}


int main () {

    // Insert node from position

    Node *head = NULL;

    while (true) {
        cout << "Option 1: Insert at tail or last" << endl;       // Error handle done
        cout << "Option 2: Print Linked List" << endl;            // Error handle done
        cout << "Option 3: Insert at head" << endl;               // Error handle done
        cout << "Option 4: Insert at any position" << endl;       // Error handle done
        cout << "Option 5: Delete head" << endl;                  // Error handle done
        cout << "Option 6: Delete from position" << endl;         // Error handle done
        cout << "Option 7: Terminate" << endl;                   
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
            int value;
            cout << "Enter node value: ";
            cin >> value;
            insert_at_head(head, value);
        }

        else if (op == 4) {
            int pos, value;
            cout << "Enter node position: " ;
            cin >> pos;
            cout << "Enter node value: ";
            cin >> value;

            if (pos == 0) {
                insert_at_head(head, value);
            }
            else {
                insert_at_position(head, pos, value);
            }
        }
        else if (op == 5) {
            delete_head(head);
        }

        else if (op == 6) {
            int pos;
            cout << "Enter delete node position: " ;
            cin >> pos;
            
            if(pos == 0) {
                delete_head(head);
            }
            else {
                delete_from_position(head, pos);
            }
        }
        else if (op == 7) {
            break;
        }
        
    }
    return 0;
}
