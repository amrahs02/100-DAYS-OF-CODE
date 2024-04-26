class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;
        int i = 0;
        int j = 0;
        int n = s.size();
        int ans = 0;

        while (j < n) {
            if (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            } else {
                st.insert(s[j]);
                j++;
                ans = max(ans, j - i);
            }
        }

        return ans;
    }
};


//sliding window technique
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;
        int i = 0;
        int j = 0;
        int n = s.size();
        int mx = 0;
        unordered_map<char, int> mp;

        while (j < n) {
            mp[s[i]]++;
            if((j-i+1)==mp.size()){
                mx = max(mx, (j-i+1));
            }
            else if ((j-i+1)>mp.size()){
                while(j-i+1>mp.size()){
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }

        return mx;
    }
};



class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int i=0,j=0,n=nums.size();
        int ans=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[nums[j]]++;
            
            if(mp[nums[j]]==1){
                ans=max(ans,j-i+1);
                j++;
            }
            else if(mp[nums[j]]>1){
                while(mp[nums[j]]>1){
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0) mp.erase(nums[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};