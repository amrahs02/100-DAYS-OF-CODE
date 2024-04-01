class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         
        int i = 0;
        int j = 0;
        int n = nums.size();
        long long cnt = 0;
        long long  mx = *max_element(nums.begin(), nums.end());
        unordered_map<int, int> mp;

        while(j<n){
            mp[nums[j]]++;
            while(mp[mx]>=k){
                cnt += n-j;
                mp[nums[i]]--;
                i++;
            }
            j++;
        }
        return cnt;
    }
};


// we have to find max in nums not in subarray (keep in mind)
