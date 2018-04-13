#include "./buildTree.cpp" 
#include <iostream>
#include <queue>

using namespace std ;

// iteration
// levelOrder printing...
// input_parameter : root node address

// use a queue to first store the root address and while popping the root
// push its left and right child into the queue..

//repeat the process till queue gets empty...  

void levelOrderPrint (node* root) {
    queue <node*> q ;
    q.push(root);
    q.push(NULL);
   
    while (!q.empty()) {
        node* n = q.front();
        q.pop();
        if (n == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
            
            
            
        } else {

            if (n->left != NULL) {
                q.push(n->left);
                
        }

            if (n->right != NULL) {
                q.push(n->right);
            
        }
        
        cout<< n->data<< " ";
        
        }
        
        
    }
}


