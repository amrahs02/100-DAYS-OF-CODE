class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        int n = word.size();
        unordered_set<char> st;
        
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(isupper(word[i])){
                st.insert(word[i]);
            }
        }
        
        for(int i = 0;i<n;i++){
            if(islower(word[i])){
                char value = (char)toupper(word[i]);
                if(st.find(value)!=st.end()){
                    cnt++;
                    st.erase(value);
                }
            }
        }
        return cnt;
    }
};
