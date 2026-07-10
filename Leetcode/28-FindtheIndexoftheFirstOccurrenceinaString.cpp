// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string& haystack, string& needle) {
        int n = haystack.size(), m = needle.size();
        if (m > n) return -1;
        for (int i = 0;i < n - m + 1;++i) {
            int j = 0;
            while (j < m and haystack[i + j] == needle[j]) ++j;
            if (j == m) return i;
        }
        return -1;
    }
};

int main() {
    string a = "a", b = "a";
    cout << Solution().strStr(a, b) << '\n';
    return 0;
}