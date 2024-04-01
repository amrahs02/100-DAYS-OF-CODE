//TLE 

class Solution {
public:  

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int i = 0;
       int j = 0;
       int n = nums.size();
       vector<int> maxVec;
       while(j<n){
        if(j-i+1==k){
           int mx = *max_element(nums.begin()+i, nums.begin()+j+1);
           maxVec.push_back(mx);
           i++;
        }
        j++;
       }
       return maxVec;
    }
};//sndp

