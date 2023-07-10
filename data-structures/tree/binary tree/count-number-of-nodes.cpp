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

int count_node (Node* root) {
    if (root == NULL) return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
}

int main () {

    // Count Number of Nodes in a Binary Tree

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

    cout << count_node(root) << endl;        // Answer - 10

    return 0;
}