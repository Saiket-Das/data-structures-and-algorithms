/*
  Postorder Traversal
  Problem Link: https://www.codingninjas.com/studio/problems/name_2035933
*/


#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> v;

void postOrder (TreeNode* root) {     // Left -> Right -> Root
    if (root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    v.push_back(root->val);           // Save the values into vector
}


vector<int> postorderTraversal(TreeNode* root)
{
    v.clear();                       // Clear vector before the function call 
    postOrder(root);
    return v;
}
