/*
  Inorder Traversal
  Problem Link: https://www.codingninjas.com/studio/problems/inorder-traversal_3839605
*/

#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

vector<int> v;

void inOrder (TreeNode* root) {     // Left -> Root -> Right
    if (root == NULL) return;

    inOrder(root->left);
    v.push_back(root->data);        // Save the values into vector
    inOrder(root->right);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();                      // Clear vector before the function call
    inOrder(root);
    return v;
}