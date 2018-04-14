#include <iostream>
#include <queue>
using namespace std;

node* levelOrderInput () {
    cout<<"Enter parent data";
    int p;
    cin>> p ;
    node* root = new node(p);
    
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* parent = q.front();
        q.pop();
        int c1, c2;
        cin>> c1;
        cin>> c2;

        if (c1 != -1) {
            parent->left = new node(c1);
            q.push(parent->left);
             
        }
        if (c2 != -1) {
            parent->right = new node(c2);
            q.push(parent->right);
            
        }
    }


}