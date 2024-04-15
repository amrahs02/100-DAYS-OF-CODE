class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int loc = partition(arr, low, high);
            quickSort(arr,low,loc-1);
            quickSort(arr,loc+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int i = low;
       int j = high;
       while(i<j){
           while(arr[i]<=pivot){
               i++;
           }
           while(arr[j]>pivot){
               j--;
           }
           if(i<j){
               swap(arr[i], arr[j]);
           }
       }
       swap(arr[j], arr[low]);
       return j;
    }
};

