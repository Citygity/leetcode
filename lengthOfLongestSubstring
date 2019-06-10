// leetcode 3
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
if (s.size() == 0)
		return 0;
	int start = 0;
	int end = 1;
	int maxLength = 1;
	while (end<=s.size())
	{
		if (s.substr(start, end - start).find(s[end]) != string::npos)
		{
			if ((end - start) > maxLength)
				maxLength = end - start;
			start++;
			end = start + 1;
			continue;
		}
		end++;
	}
	if ((end-- - start) > maxLength)
		maxLength = end - start;
	return maxLength;
    }
};
