// we need height function also to calculate the diameter of the tree

#include <iostream>
#include "./treeHeight.cpp"

using namespace std;
 
 int diameter(node* root) {
    if (root == NULL) {
         return 0;
    }

    return max(max(diameter(root->left), diameter(root->right)), treeHeight(root->left) + treeHeight(root->right) ) ;
 }
