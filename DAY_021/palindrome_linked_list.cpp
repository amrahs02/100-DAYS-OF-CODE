// tle with vector

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
        }

        int i = 0;
        int j = v.size()-1;
        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }
        }
        return true;
    }
};


// Tle with string
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        string str;
        ListNode *temp = head;
        while(temp){
            str+= to_string(temp->val);
        }

        int i = 0;
        int j = str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
        }
        return true;
        
    }
};