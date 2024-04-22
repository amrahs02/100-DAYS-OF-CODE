class Solution {
public:
    void help(string s,int n,vector<string>  &ans){
        if(n==s.size()) {
            ans.push_back(s);
            return;
        }
            if(isalpha((s[n]))){
                    s[n]=toupper(s[n]);
                    help(s,n+1,ans); 
                    s[n]=tolower(s[n]);
                    help(s,n+1,ans);
            }
            else    help(s,n+1,ans);
        return;
    } 

    vector<string> letterCasePermutation(string s) {
        vector<string>  ans;
        int n=0;
        help(s,n,ans) ;
        return ans;
    }
};