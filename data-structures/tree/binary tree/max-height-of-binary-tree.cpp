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

int max_height (Node* root) {
    if (root == NULL) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);

    if (r < l) return l+1;
    else       return r+1; 
}

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

int main () {

    // Get the Maximum Height of a Binary Tree

    Node *root = input_tree();               // 10 20 60 30 50 70 -1 -1 90 -1 -1 -1 -1 80 -1 -1 -1
    cout << max_height(root) << endl;        // Answer - 5

    return 0;
}