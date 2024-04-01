class Solution {
public:
    bool isAnagram(string s,string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>idx;
        
        int n=s.size();
        int m=p.size();
        int i;
        for(i=0;i<=n-m;i++)
        {
            string temp=s.substr(i,m);
            if(isAnagram(temp,p))
                idx.push_back(i);
        }
        return idx;
        
    }
};
//


//aditya verma approach 
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int i = 0;
        int j = 0;
        int n = s.size();
        int k = p.size();
        vector<int> v;
        unordered_map<char, int> mp;

        for(int i = 0; i<k;i++) mp[p[i]]++;
        int cnt = mp.size();


        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) cnt--;
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(cnt == 0) v.push_back(i);
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1) cnt++;
                }
                i++;
                j++;
            }
        }
        return v;
    }
};