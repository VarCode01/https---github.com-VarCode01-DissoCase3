#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void printTree(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    TreeNode* root; // Uninitialised pointer
    printTree(root); // Undefined behaviour
    return 0;
}