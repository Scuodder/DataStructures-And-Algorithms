#include <iostream>
using namespace std;

// count nodes in a binary tree

int countNodes (node* root) {
    if (root == NULL) {
        return 0 ;
    }

    return countNodes(root->left) + countNodes(root-> right) + 1;  
}



