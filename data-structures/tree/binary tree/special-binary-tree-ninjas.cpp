/*
  Special Binary Tree
  Problem Link: https://www.codingninjas.com/studio/problems/special-binary-tree_920502
*/

#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

**********************************************************     ***/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if (root->left == NULL && root->right == NULL) return true;
    if (root->left == NULL || root->right == NULL) return false;

    bool left  = isSpecialBinaryTree(root->left);
    bool right = isSpecialBinaryTree(root->right);

    if (left == false || right == false) return false;

    return true; 
}