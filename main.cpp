#include "./binaryTrees/buildTree.cpp" // <== this file must be included always ..
#include "./binaryTrees/levelOrderPrint.cpp"
#include "./binaryTrees/countNodes.cpp"
#include "./binaryTrees/treeDiameter.cpp" //if using diameter file don't use treeHeight file 
#include <iostream>



using namespace std ;

int main() {

    node* root = buildTree();
    levelOrderPrint(root) ;
    cout<<endl; 
    
    int count = countNodes(root);
    cout << count<< endl;
    int height = treeHeight(root);
    cout<< height <<endl; 

    int treeDiameter = diameter(root);
    cout<< treeDiameter<<endl;
    return 0 ;
}