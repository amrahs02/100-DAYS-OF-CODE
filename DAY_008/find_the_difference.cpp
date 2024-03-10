class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<t.size(); i++) {
            if(s[i] != t[i]) return t[i]; 
        }
        return t[t.size() - 1];
    }

};



// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         unordered_map <char, int> mp;
//         for(auto ch : s) {
//             mp[ch]++;
//         }
//         for(auto ch : t) {
//             if(mp.find(ch) == mp.end()) return ch;
//             if(mp[ch] > 1) mp[ch]--;
//             else mp.erase(ch);
//         }
//         return '/';
//     }

// };

// using xor opr
 int ans = 0;

        for(auto ch : s + t) {
            ans = ans ^ (int)ch;
        }
        return (char)ans;