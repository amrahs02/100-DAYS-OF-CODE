class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> ans(n); // n size vector
        sort(deck.begin(), deck.end()); // sort

        queue<int> q;
        // push all values in queue
        for (int i = 0; i < n; ++i) {q.push(i);}
        
        int j = 0;
        while (!q.empty()) {
            int i = q.front();
            q.pop();
            ans[i] = deck[j++];
            i = q.front();
            q.pop();
            q.push(i);
        }
        return ans;
    }
};