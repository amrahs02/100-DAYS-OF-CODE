
bool linearSearch(int arr[], int size, int k)
{   
    //empty
    if (size == 0) return false;
    // single element
    if (arr[0] == k) return true;
    
    else{
        int remaining = linearSearch(arr + 1, size - 1, k);
        return remaining;
    }
}