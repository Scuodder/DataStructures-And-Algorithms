#include <iostream>
using namespace std;

// build a segment  tree 
void buildTree (int* arr,int *tree, int start, int end, int treenode) {
    if (start == end) {
        tree[treenode] = arr[start];
        return;
    }
    
    int mid = (start + end) / 2 ;

    buildTree(arr, tree, start, mid, 2*treenode );
    buildTree(arr, tree, mid + 1, end, (2*treenode) +1 );

    tree[treenode] = arr[2*treenode] + arr[2*treenode + 1]; 

}

// update a segment tree  
void updateTree (int *arr, int *tree, int start, int end, int treenode, int index, int value) {
    if (start == end) {
        arr[index] = value ;
        tree[treenode] = value ; 
      }

    int mid = (start+end) / 2 ;

    if (index <= mid ) {
        updateTree(arr, tree, start, mid, 2*treenode, index, value) ;
    } else {
        updateTree(arr, tree, mid + 1, end, (2*treenode) + 1 , index, value  );
    }
    tree[treenode] = tree[2*treenode + 1] + tree[2*treenode] ; 

}


