/*  Use recursion to check if your array is sorted or not.
 1) Compare the first two elements of the current array for ascending order.
 2) if 1) condition is true ( i.e a[0] and a[1] are in ascending order ) 
 then call sortCheck function on the smaller array. 
*/
bool sortCheck (int* array, int size) {
    // base case --------->
    if(size == 1 || size == 0){
        return true;
    } 
    // compare first two elements of the current array
    if(array[0] > array[1]){ 
        return false;
    } 
    
    else{ 
    // a[0] < a[1]
    //  calling smaller array 
     return sortCheck(array+1, size-1); // returns whatever sortCheck on smaller array returns
    
    }
    

} 

//OR


bool sortCheck (int* array, int size) {
    // base case --------->
    if(size == 1 || size == 0){
        return true;
    }

    bool isSmallerSorted = sortCheck(array+1, size-1);
    
    if(!isSmallerSorted){
        return false;
    }

    // compare the first two elements of the current array after sortCheck function returns true for smaller array
    if(array[0] > array[1]){
        return false;
    } else{
        return true;
    }
    
    
}