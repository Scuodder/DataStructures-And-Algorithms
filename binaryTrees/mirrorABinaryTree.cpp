#include <iostream>
// using node structure from createNode.cpp file
// include createNode.cpp in main.cpp before using this function

using namespace std;

void mirror (node* root) {
    if (root == NULL) {
        return;
    }
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}

