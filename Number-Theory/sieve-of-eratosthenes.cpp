#include<iostream>
using namespace std;


// initialize the array with 1 
void fill (int arr[],int n) {
  arr[0] = arr[1] = 0;
  for (int i=2;i<=n;i++){
    arr[i] = 1;
  }
    
}

// make the sieve and find number of primes
void find (int arr[], int n) {
  int ctr=0;
  for (int i=2 ; i*i <= n ; i++ ) {
    if (arr[i] == 1 ) {
     
     
      for (int j = i*i ; j<=n ; j+=i) {
      arr[j] = 0;
    }
    }
   
  }
  
  for (int i=2 ; i <= n ; i++ ) {
    if (arr[i] == 1 ) {
     ctr++;
  
    }
   
  }
  
cout<< ctr;
}



int main(){

  int n;
  cin>>n;
  
  int *arr = new int[n+1];
  
  fill(arr,n);
  find(arr,n); 
  return 0 ;
}
