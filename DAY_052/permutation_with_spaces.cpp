class Solution{
public:
    void solve(string ip, string op, vector<string> &per){
        if(ip.empty()){
            per.push_back(op);
            return;
        }
        
        string op1 = op;
        string op2 = op;
        
        op1.push_back(' ');
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        
        ip.erase(ip.begin()+0);
        
        solve(ip, op1, per);
        solve(ip, op2, per);
    }
    
    vector<string> permutation(string ip){
       string op;
       
       op.push_back(ip[0]);
       ip.erase(ip.begin()+0);

       vector<string> per;

       solve(ip, op, per);
       return per;
    }
};