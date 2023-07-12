/*
  Node Level
  Problem Link: https://www.codingninjas.com/studio/problems/node-level_920383
*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int> > q;                  // Create Queue of pairs
    q.push({root, 1});                                    // Push (root node & initial level as 1) into Queue

    while (!q.empty()) {
        pair<TreeNode<int>*, int> parent = q.front();     // Save front node of Queue (as parent)
        TreeNode<int>* node = parent.first;               // Get & Save node value from parent
        int level = parent.second;                        // Get & Save level value from parent

        q.pop();                                          // Delete front node from Queue

        if (node->val == searchedValue) return level;     // If parent's value & search value same then return current level

        level++;
        if (node->left)  q.push({node->left, level});     // If left value available then push into Queue
        if (node->right) q.push({node->right, level});    // If Right value available then push into Queue
    }

    return 0;
}
