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

void inOrder (Node* root) {
    if (root == NULL) return;

    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main () {

    // In Order Traversal of Binary Tree

    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    // Parent - root
    root->left = a;
    root->right = b;

    // Parent - a
    a->left = c;
    a->right = d;

    // Parent - b
    b->left = e;
    b->right = f;

    // Parent - c
    c->right = g;

    // Parent - e
    e->left = h;
    e->right = i;

    inOrder(root);

    return 0;
}