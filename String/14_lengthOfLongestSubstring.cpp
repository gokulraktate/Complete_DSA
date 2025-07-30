/*

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int left = 0, right = 0;
        int maxLen = 0;

        while (right < s.size()) {
            if (st.find(s[right]) == st.end()) {
                st.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                right++;
            } else {
                st.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};


*/