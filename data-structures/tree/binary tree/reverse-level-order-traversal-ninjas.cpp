/*
  Reverse Level Order Traversal
  Problem Link: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339
*/

/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>

vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> v;
    queue<TreeNode<int>*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        TreeNode<int>* node = q.front();
        q.pop();

        v.push_back(node->val);

        if (node->left)  q.push(node->left);
        if (node->right) q.push(node->right);
    }

    reverse(v.begin(), v.end());
    return v;
}