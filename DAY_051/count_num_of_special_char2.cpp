class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> high,low;
        int ans=0;
        for(int i=0,j=word.size()-1;i<word.size();i++,j--){
            if(word[i]>='A' && word[i]<='Z'){
                if(high.find(word[i])==high.end()) high[word[i]]=i;
            }
            if(word[j]>='a' && word[j]<='z'){
                if(low.find(word[j])==low.end()) low[word[j]]=j;
            }
        }
        for(auto it:high){
            char ch = tolower(it.first);
            if(low.find(ch) !=low.end() && it.second>low[ch]) ans++;
        }
        return ans;
    }
};