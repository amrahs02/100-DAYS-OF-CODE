class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;

        for (auto it : nums1) {
            st.insert(it);
        }

        for (auto it : nums2) {
            if (st.count(it)) {
                ans.push_back(it);
                st.erase(it);  // Remove the element from the set to avoid duplicates
            }
        }

        return ans;
    }
};




// 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        vector<int> result;
        for (const auto& num : st1) {
            if (st2.find(num) != st2.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};