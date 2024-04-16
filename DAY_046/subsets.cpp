class Solution {
public:
    vector<vector<int> >m;
    void solve(vector<int>nums,vector<int>op)
    {
        if(nums.size()==0)
        {
            m.push_back(op);
            return;
        }
        vector<int>output1=op,output2=op;
        output1.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        
        solve(nums,output1);
        solve(nums,output2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>op;
        solve(nums,op);
        return m;
        
    }
};