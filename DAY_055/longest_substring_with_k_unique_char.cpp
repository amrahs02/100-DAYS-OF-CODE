class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i = 0;
        int j = 0;
        int n = s.length();
        int mx = -1;
        unordered_map<char, int> mp;
        
        while(j<n){
            mp[s[j]]++;
            
            if(mp.size()==k){
                mx = max(mx, j-i+1);
            }
            else if (mp.size()>k){
                while(mp.size()>k){
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