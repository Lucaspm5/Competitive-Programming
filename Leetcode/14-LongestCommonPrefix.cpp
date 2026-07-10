// Link: https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool equal = true;
        string ans;
        int i = 0;
        while (equal and i < strs[0].size()) {
                char previous = strs[0][i];
                for (int j = 1;j < strs.size() and equal;++j) {
                    if (i < strs[j].size())
                        equal &= (strs[j][i] == previous);
                    else equal = false;
                }           
                if (equal) ans += previous;
                ++i;
        }
        return ans;
    }
};