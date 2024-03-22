class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int> > ans;
        int n= intervals.size();
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            //element is present in the matrix
            else{
                vector<int> &v = ans.back(); // taking address for v
                int y = v[1]; // end time of previous interval

                // overlap
                if(y>=intervals[i][0]){
                    v[1] = max(y, intervals[i][1]);// we have taken address to modify v here
                }
                // donot overlap
                else{
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
// explained by cwa