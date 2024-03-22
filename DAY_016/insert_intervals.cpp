        in.push_back(newin);
class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newin) {
        in.push_back(newin);
        sort(in.begin(), in.end());

        vector<vector<int> > ans;
        int n= in.size();

        for(int i=0;i<n;i++){
            if(ans.empty()) ans.push_back(in[i]);
            //element is present in the matrix
            else{
                vector<int> &v = ans.back(); // taking address for v
                int y = v[1]; // end time of previous interval

                // overlap
                if(y>=in[i][0]){
                    v[1] = max(y, in[i][1]);// we have taken address to modify v here
                }
                // donot overlap
                else{
                    ans.push_back(in[i]);
                }
            }
        }
        return ans;
    }
};
// explained by cwa