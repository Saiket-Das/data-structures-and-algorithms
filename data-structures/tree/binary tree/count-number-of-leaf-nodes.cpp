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

int count_leaf_node (Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    else {
        int l = count_leaf_node(root->left);
        int r = count_leaf_node(root->right);
        return l+r;
    }
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

    // Count Number of Leaf Nodes in a Binary Tree

    Node *root = input_tree();                    // 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1 
    cout << count_leaf_node(root) << endl;        // Answer - 4

    return 0;
}