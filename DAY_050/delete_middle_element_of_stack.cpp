class Solution
{
    public:
     void solve(stack<int>&s,int cnt, int sizeOfStack){
        //base case
        if(cnt == sizeOfStack/2){
            s.pop();
            return ;
        }
        
        int num = s.top();
        s.pop();
        solve(s,cnt+1,sizeOfStack);
        s.push(num);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
         solve(s,0,sizeOfStack);
    }