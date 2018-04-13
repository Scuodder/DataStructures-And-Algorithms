#include <iostream>
using namespace std;

// inorder printing

// assumption
// (print left subtree first) => (THEN root of the tree) => (THEN right subtree)


void inOrder(node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout<< root->data<<" " ;
    inOrder(root->right);
    return;
}



