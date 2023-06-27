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

int main () {

    // Stack Implement using List

    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        st.push(x);
    }

    cout << "Top value -> " << st.top() << endl;
    cout << "Is empty  -> " << st.empty() << endl;
    cout << "Size      -> " << st.size() << endl;

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}