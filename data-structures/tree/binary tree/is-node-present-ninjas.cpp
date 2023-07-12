/*
  Is Node Present?
  Problem Link: https://www.codingninjas.com/studio/problems/code-find-a-node_5682
*/

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if (root == NULL) return false;                     // If root is empty

    if (root->data == x) return true;
    
    bool left  = isNodePresent(root->left, x);          // Check left view's nodes
    bool right = isNodePresent(root->right, x);         // Check right view's nodes  

    if (left == true || right == true) return true;     // If any of them (left or Right) true, then return true
    else return false;
}