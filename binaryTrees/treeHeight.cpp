#include <iostream>
using namespace std;

// height of binary tree

int treeHeight(node* root) {

    if(root == NULL) {
        return 0;
    }

    return max(treeHeight(root-> left), treeHeight(root->right)) + 1 ;
}



