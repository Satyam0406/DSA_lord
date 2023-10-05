#include <iostream>

// Define the structure of a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform an inorder traversal of a binary tree
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    
    // Recursively traverse the left subtree
    inorderTraversal(root->left);
    
    // Process the current node (in this case, we'll print the value)
    std::cout << root->val << " ";
    
    // Recursively traverse the right subtree
    inorderTraversal(root->right);
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    // Perform an inorder traversal
    std::cout << "Inorder Traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;
    
    // Clean up the memory (not shown in detail here)
    
    return 0;
}







