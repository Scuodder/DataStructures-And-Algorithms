#include <iostream>
using namespace std;

// postOrder printing

// assumption
// (print left subtree first) => (THEN right subtree) => (THEN root of the tree)


void postOrder(node* root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data<<" " ;

    return;
}
