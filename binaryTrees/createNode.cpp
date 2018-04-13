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


