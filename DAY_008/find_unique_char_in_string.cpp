class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(int i=0;i<s.size();i++){ // inserting all values in map
            mp[s[i]]++;
        }

        for(int i=0;i<s.size();i++){ // traversing map
            if (mp[s[i]]==1){        // checking if map contains values whose count is 1
                return i;            //return index
            }
        }
        return -1;
    }
};

// O(n) if we use map<..> then it takes O(nlogn)
// O(1)



//brute force 
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i<s.size(); i++){
            bool appears_again = false;
            for(int j=0; j<s.size(); j++){
                if(i != j && s[i] == s[j]){
                    appears_again = true;
                    break;
                }
            }
            if(!appears_again) return i;
        }
        return -1;
    }
};

// o (n*n)
// o (1)




///using vector
int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for(auto ch : s){
            freq[ch - 'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(freq[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }