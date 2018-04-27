#include <iostream>
using namespace std;

// build a segment  tree 
void buildTree (int* arr,int *tree, int start, int end, int treeNode) {
    if (start == end) {
        tree[treeNode] = arr[start];
        return;
    }
    
    int mid = (start + end) / 2 ;

    buildTree(arr, tree, start, mid, 2*treeNode );
    buildTree(arr, tree, mid + 1, end, (2*treeNode) +1 );

    tree[treeNode] = arr[2*treeNode] + arr[2*treeNode + 1]; 

}

// update a segment tree  
void updateTree (int *arr, int *tree, int start, int end, int treeNode, int index, int value) {
    if (start == end) {
        arr[index] = value ;
        tree[treeNode] = value ; 
      }

    int mid = (start+end) / 2 ;

    if (index <= mid ) {
        updateTree(arr, tree, start, mid, 2*treeNode, index, value) ;
    } else {
        updateTree(arr, tree, mid + 1, end, (2*treeNode) + 1 , index, value  );
    }
    tree[treeNode] = tree[2*treeNode + 1] + tree[2*treeNode] ; 

}


int query (int* tree, int start, int end, int treeNode, int left, int right ) {

    if (start > right || end < left) {
        return 0 ;
    }
     if (start <= left && end >= right ) {
         return tree[treeNode]; 
     } 

    int mid = (start + end) / 2 ; 

    return query(tree, start, mid, 2*treeNode, left, right ) + query(tree, mid + 1, end, 2*treeNode + 1, left, right) ;

}