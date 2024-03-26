// tle with vector

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = v.size()-1;
        while(i<j){
            if(v[i++]!=v[j--]){
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
            temp = temp->next;
        }

        int i = 0;
        int j = str.size()-1;
        while(i<j){
            if(str[i++]!=str[j--]){
                return false;
            }
        }
        return true;
        
    }
};

// tle with stack 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        
        ListNode* temp = head;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        
        while(!s.empty()){
            if(head->val !=s.top()){
                return false;
            }
            s.pop();
            head = head->next;
        }
        return true;
    }
};

// reversed entire linked lsit
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        //if empty or single value
        if(head==NULL && head->next==NULL){
            return true;
        }

        //reverse entire linkedList
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nxt = NULL;

        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        // match original with reversed
        ListNode* reversedHead = prev;
        while(reversedHead && head ){
            if(head->val != reversedHead->val){
                return false;
            }
            reversedHead = reversedHead->next;
            head = head->next;
        }
        return true;

    }
};


// revese only half of linked list
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        //if empty or single value
        if(head==NULL && head->next==NULL){
            return true;
        }

        // to reach 2nd half of ll
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //reverse 2nd half of ll
        ListNode *prev = NULL;
        ListNode *curr = slow->next;
        ListNode *nxt = NULL;

        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        // match original with reversed
        ListNode* reversedHead = prev;
        while(reversedHead && head ){
            if(head->val != reversedHead->val){
                return false;
            }
            reversedHead = reversedHead->next;
            head = head->next;
        }
        return true;

    }
};