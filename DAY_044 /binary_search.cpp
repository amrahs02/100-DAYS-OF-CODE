
class Solution {
    int binarySearch(int arr[], int s, int e, int k) {
        
        //absent
        if (s>=e) return false;
        //mid
        int mid = s+ (e-s)/2;
        //present 
        if(arr[mid]==k) return mid;
        
        if(arr[mid]>k){
            binarySearch(arr, s, mid-1, k);
        }
        else{
            binarySearch(arr, mid+1, e, k);
        }

    }
  public:
    int binarysearch(int arr[], int n, int k) {
        
        int ans = binarySearch(arr, 0, n-1, k);
        return ans;
        
    }