class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size() - 1;
        string str;
        bool foundWord = false;

        for (int i = n; i >= a0; i--) {
            if (isalpha(s[i])) {
                foundWord = true;
                str += s[i];
            } else if (foundWord) {
                break; 
            }
        }

        return str.size();
    }
};


/// 
// method 2

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};



