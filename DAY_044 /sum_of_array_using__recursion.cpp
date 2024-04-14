int sumOfArray(int arr[], int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remaining =  sumOfArray(arr+1, size-1);
    return remaining + arr[0];
}