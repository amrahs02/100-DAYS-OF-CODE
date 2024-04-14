class Solution
{
public:
    void reverse(string &str, int i, int j)
    {
        if (i > j)
            return;

        swap(str[i++], str[j--]);
        reverse(str, i, j);
    }

    string reverseWord(string str)
    {
        reverse(str, 0, str.length() - 1);
        return str;
    }