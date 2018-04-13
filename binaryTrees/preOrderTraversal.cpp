#include "./buildTree.cpp" 
#include <iostream>
using namespace std ;

// preorder printing...
// input_parameter : root node address
// assumption prints the head first then the print left tree and the right tree..

void preOrder (node* root) {
    if (root == NULL) {
        return; 
    }

    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}


