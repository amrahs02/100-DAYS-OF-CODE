class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int j = 0;
        int n = fruits.size();
        int mx = -1;
        int k = 2;
        unordered_map<int, int> mp;
       

        while (j < n) {
            mp[fruits[j]]++;
            if (mp.size() <= k) {
                mx = max(mx, j - i + 1);
            } else if (mp.size() > k) {
                while (mp.size() > k) {
                    mp[fruits[i]]--;
                    if (mp[fruits[i]] == 0)
                        mp.erase(fruits[i]);
                    i++;
                }
            }
            j++;
        }
        return mx;
    }
};