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
        this->right = NULL;
    }  
};

Node* input_tree () {
    int value;
    cin >> value;

    Node* root;
    if (value == -1) {
        root = NULL;
    }
    else {
        root = new Node(value);
    }

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        // Bring the node
        Node* parent = q.front();
        q.pop();

        // Do the rest of the things
        int l, r;                                  
        cin >> l >> r;

        Node* leftNode;
        Node* rightNode;

        if (l == -1) {              // Push to left node
            leftNode = NULL;
        }
        else {
            leftNode = new Node(l);
        }
        if (r == -1) {              // Push to right node
            rightNode = NULL;
        }
        else {
            rightNode = new Node(r);
        }
        
        parent->left  = leftNode;
        parent->right = rightNode;

        // Push childrens value of that node to Queue
        if (parent->left)   q.push(parent->left);           
        if (parent->right)  q.push(parent->right); 
    }

    return root;
}

void level_order (Node* root) {
    if (root == NULL) {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();                   // Bring the node
        q.pop();
        
        cout << f->val << " ";                 // Print the node value
         
        if (f->left)   q.push(f->left);
        if (f->right)  q.push(f->right);
    }
}

bool search (Node* root, int x) {          // Time Complexity -> O(h) (h = height) 
    if (root == NULL) return false;

    if (root->val == x) return true;

    if (x < root->val) {
        return search(root->left, x);;
    }
    else {
        return search(root->left, x);
    }
}


int main () {

    // Search in BST

    Node* root = input_tree();

    cout << "Level order -> ";
    level_order(root);
    cout << endl;

    int x;
    cin >> x;
    if (search(root, x) == true) cout << "Yes, Found";
    else                         cout << "No, Not Found";

    return 0;
}