//leetcode 5
class Solution {
public:
    string longestPalindrome(string s) {
    if (s.length() == 0)
        return "";
    if (s.length() == 1)
        return s;
    int longestPalindromeLength = 1;
    std::string result(1,s[0]) ;
    for (int i = 0; i < s.length(); i++) {
        int palinSize = 0;
        int low = i - 1;
        int high = i + 1;
        while(s[i]==s[high]&&high<s.length())
            high++;
        while (low >= 0 && high < s.length() && s[low] == s[high])
        {
            low--;
            high++;
        }
        palinSize = high-low-1;
        if (palinSize > longestPalindromeLength) {
            longestPalindromeLength = palinSize;
            result = s.substr(low + 1, high-low-1);
        }
    }
    return result;
                 
    }
};
