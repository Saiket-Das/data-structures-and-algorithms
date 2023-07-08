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

// Stack
class myStack {
    public: 
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push (int v){
            sz++;
            Node* newNode = new Node(v);
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
            Node* deleteNode = tail;
            tail = tail->prev;

            if (tail == NULL) {
                head = NULL;
            }
            else {
                tail->next = NULL;
            }
            delete deleteNode;
        }
        int top () {
            return tail->value;
        }
        int size () {
            return sz;
        }
        bool empty () {
            if (sz == 0) return true;
            else         return false;
        }
};


// Queue
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


bool isSame (myStack s, myQueue q) {
    if (s.size() != q.size()) {
        return false; 
    }

    while (!s.empty()) {
        if (s.top() != q.front()) {
            return false; 
        }
        s.pop();
        q.pop();
    }
    return true;
}

int main () {

    // Same to Same Again
    // Problem Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again-1

    myStack s;
    myQueue q;

    int n, m;       // n = Number of elements (Stack) & m = Number of elements (Queue)
    cin >> n >> m;

    while (n--) {          // Stack input
        int value;
        cin >> value;
        s.push(value);
    }
    while (m--) {          // Queue input
        int value;          
        cin >> value;
        q.push(value);
    }

    bool same = isSame (s, q);

    if (same == true) cout << "YES" << endl;
    else              cout << "NO" << endl;

    return 0;
}