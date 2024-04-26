

// nlogn
class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();
        if(l1!=l2) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0;i<l1;i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        
        return true;
    }
};






class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (l1 != l2)
            return false;
        int cnt = 0;
        
        for (int i = 0; i < l1 ; i++) {
            if (s[i] != t[i]) {
                cnt++;
            }
        }
        if (cnt >0) {
            return false;
        }
        return true;
    }
};






class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;
        map<char, int> mp1;
        map<char, int> mp2;

        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            mp2[t[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (mp1[s[i]] != mp2[s[i]]) {
                return false;
            }
        }
        return true;
    }
};