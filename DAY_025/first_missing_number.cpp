class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1 ;
        sort(nums.begin(), nums.end()) ;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == ans){
                ans++ ;
            }
        }
        return ans ;
    }
};

// nlogn sort



// n and n 
class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        int maxi = *max_element(nums.begin(), nums.end()); // max in vector
        
        for(auto &num : nums){                             // insert all value in set
            st.insert(num);
        }
        for(int i=1; i<maxi; i++){
            if(st.find(i) == st.end())
                return i;
        }
        return maxi < 0 ? 1 : maxi+1;
    }
};
