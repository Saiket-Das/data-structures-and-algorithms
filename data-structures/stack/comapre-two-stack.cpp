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

class myStack {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val) {
            sz++;
            Node* newNode = new Node(val);
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

            if (tail == NULL)  head = NULL;
            else               tail->next = NULL;

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

bool compareStack (myStack s1, myStack s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    while(!s1.empty()) {
        if (s1.top() != s2.top()) return false;
        s1.pop();
        s2.pop();
    }

    return true;
}

int main () {

    // Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

    /*
      Input
        5
        10 20 30 40 50
        5
        10 20 30 40 50
      
      Output
        YES
      ------------------
      Input
        5
        10 20 30 40 50
        4
        10 20 30 40
      
      Output
        NO
      ------------------
      Input
        5
        10 20 30 40 50
        5
        50 40 30 20 10
      
      Output
        NO
    */

    myStack s1;
    myStack s2;

    int n, m;                      // n - Number of element (Stack 1) & m - Number of element (Stack 2)

    cin >> n;
    while (n--) {
        int value;
        cin >> value;
        s1.push(value);
    }

    cin >> m;
    while (m--) {
        int value;
        cin >> value;
        s2.push(value);
    }

    bool isSame = compareStack(s1, s2);

    if (isSame == false) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    
    return 0;
}