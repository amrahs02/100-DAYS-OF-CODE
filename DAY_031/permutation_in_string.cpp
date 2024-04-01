class Solution {


public:
    bool isPermutation(string temp, string s1){
        sort(temp.begin(), temp.end());
        return s1 == temp;
    }

    bool checkInclusion(string s1, string s2) {
        int i = 0;
        int j = 0;
        int k = s1.size();
        int n = s2.size();
        sort(s1.begin(), s1.end());

        while(j<n){    
            if(j-i+1==k){
                string temp = s2.substr(i,k);
                if(isPermutation(temp, s1)){
                    return true;
                }
                i++;
            }

            j++;
        }
        return false;
    }
};//sndp