class Solution {
public:

    void helper(string digits, map<int, string> mp, vector<string> &ans, string &temp, int idx)
    {
        if(temp.size() == digits.size())
        {
            ans.push_back(temp);
            return;
        }
        for (char c : mp[digits[idx]-'0']) {
            temp.push_back(c);
            helper(digits, mp, ans, temp, idx + 1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()) return ans;
        string temp = "";
        map<int, string> mp;
        mp = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
        helper(digits, mp, ans, temp, 0);
        return ans;
    }
};