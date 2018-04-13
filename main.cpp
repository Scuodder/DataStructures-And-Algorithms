#include "./binaryTrees/levelOrderPrint.cpp"
#include <iostream>


using namespace std ;

int main() {

    node* root = buildTree();
    levelOrderPrint(root) ;
    return 0 ;
}