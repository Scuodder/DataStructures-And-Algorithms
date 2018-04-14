#include<iostream>


bool search(node* root,int data) {
    
    if (root == NULL) {
        return false;
    }
    if (data == root->data) {
        return true;
    }

    if (data > root->data) {
        return search(root->right, data);
    } 
       
        return search(root->left, data); 


}