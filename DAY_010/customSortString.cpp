class Solution {
public:
    string customSortString(string order, string s) {
        string result = "";
        unordered_map<int,int>mp;

        for(auto &it : s){                         // insert all values in map
            mp[it]++;
        }

        for(auto &it : order){
            if(mp.find(it) != mp.end())
                result.append(mp[it], it);          // append in res count times
                mp.erase(it);                       // delete now its processed
        }
        for(auto &it : mp){
            result.append(it.second,it.first);      // iterate through remaingin char
        }
        return result;
    }
};