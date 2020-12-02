// 1. SECOND LARGEST IN AN ARRAY ====== https://www.geeksforgeeks.org/find-second-largest-element-array/ ====== 
int print2largest(int arr[], int arr_size){
    if(arr_size==1 || arr_size==0) return -1;
    int l=-1e8;
    int sl=-1e8;
    for(int i=0;i<arr_size;i++){
        int el=arr[i];
        if(el>l && el>sl){
            sl=l;
            l=el;
        }
        else if(el<l && el>sl){
            sl=el;
        }
    }
    if(sl==-1e8) return -1;
    return sl;
}

// 2.   CHECK IF ARRAY IS SORTED ======https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive/========
bool arraySortedOrNot(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}