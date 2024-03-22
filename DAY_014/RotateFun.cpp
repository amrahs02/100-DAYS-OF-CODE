// TLE

  int maxRotateFunction(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 0) return 0;

        int maxF = INT_MIN;                               //ans
        
        for (int i = 0; i < n; i++) {
            
            int F = 0;                                    //sum
            for (int j = 0; j < n; j++) {
                F += j * nums[j];
            }
            maxF = max(maxF, F);

            int lastElement = nums[n - 1];
            nums.pop_back();
            nums.insert(nums.begin(), lastElement);
        }

        return maxF;
        
        
    }