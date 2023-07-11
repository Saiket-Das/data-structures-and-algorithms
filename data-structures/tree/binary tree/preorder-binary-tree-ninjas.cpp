/*
  Preorder Binary Tree
  Problem Link: https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948
*/

/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
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

***********************************************************/

void print_preOrder (BinaryTreeNode<int>* root) {     // Root -> Left -> Right
	if (root == NULL) return;

	cout << root->data << " ";
	print_preOrder(root->left);
	print_preOrder(root->right);     // Output
}


void preOrder(BinaryTreeNode<int> *root) {
	print_preOrder(root);
}