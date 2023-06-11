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

int main () {

    //  Constructor of Node

    Node a(10);
    Node b(20);
    Node c(30);

    a.next = &b;
    b.next = &c;

    cout << a.value << " " << a.next << endl;       // value = 10 & &b.value = b node's address
    cout << b.value << " " << b.next << endl;       // value = 20 & &c.value = c node's address
    cout << c.value << " " << c.next << endl;       // value = 30 & Next node = NULL or 0

    cout << a.next->next << " = " << &c<< endl;     // Answer = 20 (a,next->next = c node's address)

    return 0;
}