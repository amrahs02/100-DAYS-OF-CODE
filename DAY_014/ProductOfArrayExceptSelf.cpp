class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());

        int prefix_Product = 1;
        for(int i=0;i<nums.size();i++){
            pre[i] = prefix_Product; 
            prefix_Product *= nums[i];
        }

        int suffix_Product = 1;
        for(int i=nums.size()-1;i>=0;i--){
            pre[i] *= suffix_Product;
            suffix_Product *= nums[i];
        }

        return pre;

// TLE
        // int mul = 1;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         mul*=nums[j];
        //     }
        //     if(i>0){
        //         for(int k=0;k<i;k++){
        //             mul*=nums[k];
        //         }
        //     }
        //     ans.push_back(mul);
        //     mul = 1;
        // }
        // return ans;
        
    }
};