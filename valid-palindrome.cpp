class Solution {
public:
    bool isValidChar(char c)
    {
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size();
        while (i <= j)
        {
            if (!isValidChar(s[i]) || !isValidChar(s[j]))
            {
                !isValidChar(s[i]) ? i++ : j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            else i++, j--;
        }
        return true;
    }
};
