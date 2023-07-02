#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node* prev;
        Node* next;
    
    Node (int value) {
        this->value = value;
        this->prev = NULL; 
        this->next = NULL; 
    }
};

class myQueue {
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push (int val) {
            sz++;
            Node *newNode = new Node(val);
            if (head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop () {
            sz--;
            Node *deleteHead = head;
            head = head->next;
            if (head == NULL) {
                tail = NULL;
                delete deleteHead;
                return;
            }

            head->prev = NULL;
            delete deleteHead;

        }

        int front () {
            return head->value;
        }

        int size () {
            return sz;
        }
        bool empty () {
            if (sz == 0) return true;
            else         return false;
        }

};

int main () {

    // Queue Implement using Doubly Linked List

    myQueue q;

    int n;                  // Number of element
    cin >> n;

    while (n--) {
        int value;          // 1 3 5 7 9
        cin >> value;
        q.push(value);
    }

    if (q.empty() != true) {                                               // Answer: 1
        cout << "Front -> " << q.front() << endl;
    }      
    cout << "Size  -> " << q.size()  << endl;                              // Answer: 5
    
    if (q.empty() != true) q.pop();

    cout << "After pop 1 time" << endl;
    
    if (q.empty() != true) {                                               // Answer: 3
        cout << "Front -> " << q.front() << endl;
    }  
    cout << "Size  -> " << q.size()  << endl;                              // Answer: 4

    return 0;

    return 0;
}