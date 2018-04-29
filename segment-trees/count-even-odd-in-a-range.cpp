
#include<iostream>
using namespace std;

void buildTree(int* arr, pair<int,int>* tree, int start, int end, int treeNode ) {
  
  if (start == end) {
    if (( arr[start] %2 ) == 0)  {
      tree[treeNode].first = 1 ;
      tree[treeNode].second = 0;
      return;
    } 
     
    tree[treeNode].first = 0 ;
    tree[treeNode].second = 1;
    
    return ; 
  } 
  
  int mid = (start + end) / 2;
  buildTree(arr, tree, start, mid, 2*treeNode);
  buildTree(arr, tree, mid + 1, end, 2*treeNode+1);
  
  tree[treeNode].first =  tree[2*treeNode].first + tree[2*treeNode+1].first ;
   tree[treeNode].second =  tree[2*treeNode].second+ tree[2*treeNode+1].second; 
  
}

void updateTree(int* arr, pair<int,int>* tree, int start, int end, int treeNode, int index, int value ) {
  
  
    if (start == end) {
    if (( value %2 ) == 0)  {
      tree[treeNode].first = 1 ;
      tree[treeNode].second = 0;
         arr[index] = value;
	return;
    } 
     
    tree[treeNode].first = 0 ;
    tree[treeNode].second = 1;
    
    arr[index] = value;
    return ; 

    
  }
  
  int mid = (start + end) /2 ;
  if (index <= mid ) {
    updateTree(arr, tree, start, mid, 2*treeNode, index, value );
  } else {
    updateTree(arr, tree, mid+1, end, 2*treeNode+1, index, value);
  }
   
  tree[treeNode].first =  tree[2*treeNode].first + tree[2*treeNode+1].first ;
   tree[treeNode].second =  tree[2*treeNode].second+ tree[2*treeNode+1].second; 
  
}

pair<int,int> query( pair<int,int>* tree, int start, int end, int treeNode, int left, int right) {
  
  if (start >= left && end <= right) {
    return tree[treeNode] ;
  }
  if (start > right || end < left ) {
    pair <int, int> temp ;
    temp. first =0;
    temp.second =0 ;
    return temp;
  }
  int mid = (start + end ) /2;
  pair<int,int> ans1 = query(tree, start, mid, 2*treeNode, left, right);
  pair<int,int> ans2 = query(tree, mid+1, end, 2*treeNode+1, left, right);
  
  pair<int,int> uop;
  uop.first = ans1.first + ans2. first;
  uop.second = ans1.second + ans2. second;
  
  return uop;
}

int main() {

	int N, Q;
  	int x,y;
  	
  	int t;

  cin >> N;

  int arr[N] ;
  pair<int,int> tree[4*N];
  for(int i=0; i<N; i++) {
    cin >> arr[i] ;
  }
  
 buildTree(arr, tree, 0, N-1, 1);

    cin>> Q;
  
  for(int i=0 ; i < Q ; i++) {
    cin>>t;
    cin>> x;
    cin>> y;
    
   
    if (t == 1) { // find even numbers in a range
    	cout<< query(tree, 0, N-1, 1, x-1, y-1).first<< endl;  
    } 
    if (t==2) { // find odd numbers in a range
      cout<< query(tree, 0, N-1, 1, x-1, y-1).second<< endl;  
    }
    if (t == 0) { // update the segment tree when array is updated
      updateTree(arr, tree, 0, N-1, 1, x-1, y);
    }
    
    
    
  }

  
    return 0;
}