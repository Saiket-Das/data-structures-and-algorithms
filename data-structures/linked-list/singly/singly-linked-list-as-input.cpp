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
    Node *temp = head;

    cout << "Linked list: ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail (Node *&head, int value) {

    Node *newNode = new Node(value);      // Create e new node with given value

    if (head == NULL) {                   // Check is there any head node. If no, then set new node as head node
        head = newNode;
        return;
    }

    Node *temp = head;                    // If yes, save head node in a temporary node
    while (temp->next != NULL) {          // Find the last node
        temp = temp->next;
    }
    temp->next = newNode;                 // Link the last node with new node 
}

// Queestion 1
int print_size_of_linked_list (Node *head) {
    Node *temp = head;
    if (head == NULL) {
        return 0;
    }

    int i = 1;
    while (temp->next != NULL) {
        i++;
        temp = temp->next; 
    }
    return i;
}


// Question 2
void check_duplicate_value (Node *head) {
    int arr[100] = {0};          // Frequence array

    Node *temp = head;
    while (temp != NULL) {       // Use (temp != NULL) instead of (temp->next) beacuse why we have to access the last node to get the value
        arr[temp->value]++;
        temp = temp->next; 
    }

    bool isTrue = false;
    for (int i = 0; i < 100; i++) {
        if(arr[i] > 1) {
            isTrue = true;
            break;
        }
    }
    
    if (isTrue == true) cout << "YES" << endl;
    else                cout << "NO"  << endl;
}

// Question 3
void print_middle_element (Node *head) {
    Node *temp = head;
    int i = 0, j=0;

    while (temp != NULL) {
        i++;                        // Find the total element
        temp = temp->next;        
    }

    int middle_element = i / 2;     // Find the middle element's index
    
    temp = head;
    while (j <= middle_element) {
        if ((i % 2 == 0) && (j == middle_element || j == middle_element - 1)) {      // If size of linked list is even then middle element are 2 
            cout << temp->value << " ";
        }
        else if (j == middle_element){                                               // If size of linked list is odd then middle element is 1
            cout << temp->value;
        }
        j++;
        temp = temp->next;
    }
    cout << endl;

}

void insert_at_head (Node *&head,  int value) {
    Node *newNode = new Node(value);

    newNode->next = head;                  // Link new head node with current head node 
    head = newNode;                        // Set the new node as current node
}

void insert_at_any_position (Node *head, int pos, int value) {
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode; 
}

int main () {

    Node *head =  NULL;

    while (true) {

        int value;
        cin >> value;

        if (value == -1) {
            int size = print_size_of_linked_list(head);
            cout << "Question 1: ";
            cout << size << endl;

            cout << "Question 2: ";
            check_duplicate_value(head);

            cout << "Question 3: ";
            print_middle_element(head);


            int t, i = 1;
            cin >> t;     // Number of test case

            while (t) {
                int pos, value;
                cin >> pos >> value;

                if (pos == 0) {
                    insert_at_head(head, value);
                }
                
                else {
                    insert_at_any_position(head, pos, value);
                }
                cout << "Test " << i << " -> ";
                print_linked_list(head);
                cout << endl;
                
                i++;
                t--;
            }
            break;
        }

        insert_at_tail(head, value);
    }

    return 0;
}

/*
    Question 1 - Take a singly linked list as input and print the size of the linked list.
      Input
        2 1 5 3 4 8 9 -1
      Output
        7
      -------------
      Input
        5 1 4 5 -1
      Output
        7      
*/

/*
    Question 2 - Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
      Input
        5 4 8 6 2 1 -1
      Output
        NO
      -------------
      Input
        2 4 5 6 7 4 -1
      Output
        YES 
*/

/*
    Question 3 - Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
      Input
        2 4 6 8 10 -1
      Output
        6
      -------------
      Input
        1 2 3 4 5 6 -1
      Output
        3 4
*/

/*
    Question 4 - Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.
      Input
        10 20 30 -1
        7           // Number of test case
        1 40        // 1 = Insert index & 40 = Insert value
        5 50
        4 50
        0 100
        7 40
        1 110
        7 40
        
      Output
        10 40 20 30
        Invalid
        10 40 20 30 50
        100 10 40 20 30 50
        Invalid
        100 110 10 40 20 30 50
        100 110 10 40 20 30 50 40
        
*/