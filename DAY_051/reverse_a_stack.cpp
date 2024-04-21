

class Solution{
public:


    void insert(stack<int>&s,int element){
        if(s.empty()){
            s.push(element);
            return ;
        }
        
        int n = s.top();
        s.pop();
        insert(s, element);
        s.push(n);
    }

    void Reverse(stack<int> &St){
        if(St.empty()){
            return ;
        }
        int num = St.top();
        St.pop();
        
        Reverse(St);
        return insert(St,num);
        
    }
};
