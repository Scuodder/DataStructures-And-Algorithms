#include<iostream>


node* insert(node* root,int data) {
    
    if (root == NULL) {
        root = new node(data);
        return root;
    }

    if (data <  root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;

}