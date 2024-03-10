// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int max_sum=0;
        for(int i=1;i<=n;i++){
            max_sum+=i;
        }
        int actual_sum=0;
        for(int i=0;i<n-1;i++){
            actual_sum+=array[i];
        }
        return max_sum-actual_sum;
    }
};