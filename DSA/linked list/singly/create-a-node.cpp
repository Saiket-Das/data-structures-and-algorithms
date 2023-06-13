#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

int main () {

    // Create a node

    Node a, b, c;

    // Value
    a.value = 10;
    b.value = 20;
    c.value = 30;
    
    // Node
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.value << " " << a.next << endl;       // value = 10 & &b.value = b node's address
    cout << b.value << " " << b.next << endl;       // value = 20 & &c.value = c node's address
    cout << c.value << " " << c.next << endl;       // value = 30 & Next node = NULL or 0

    cout << a.next->next << " = " << &c<< endl;     // Answer = 20 

    return 0;
}