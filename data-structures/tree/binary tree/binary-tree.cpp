#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;

    Node (int val) {
        this->val  = val;
        this->left = NULL;
        this->left = NULL;
    }  
};

int main () {

    // Binary Tree

    Node* root = new Node(10);

    // Parent - root
    Node* a = new Node(20);
    Node* b = new Node(30);
    root->left = a;
    root->right = b;

    // Parent - a
    Node* c = new Node(40);
    Node* d = new Node(50);
    a->left = c;
    a->right = d;

    // Parent - b
    Node* e = new Node(60);
    Node* f = new Node(70);
    b->left = e;
    b->right = f;


    // Parent - e
    Node* g = new Node(80);
    e->left = g;

    // Parent - f
    Node* h = new Node(90);
    Node* i = new Node(10);
    f->left = h;
    f->right = i;

    return 0;
}