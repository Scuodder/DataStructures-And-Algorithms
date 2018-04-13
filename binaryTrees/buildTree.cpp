#include <iostream>
using namespace std;

// node structure
class node {
    public :
        int data;
        node* left;
        node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }    
};

// build function (recursion) 
// return-type : root the tree passed in the function 

/* assumption : build tree function builds the tree by taking 
 input for root then returns the root address of the tree after building the
 tree on the left and right...
 */ 

node* buildTree () {
    
    cout << "Enter data";
    int data;
    cin>> data;
    
    if (data == -1) {
        return NULL ; 
    }

    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    
    return root;
}

