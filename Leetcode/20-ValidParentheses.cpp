// Link: https://leetcode.com/problems/valid-parentheses/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string &s) {
        map<char, char> memo {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> p;
        for (int i = s.size() - 1;i >= 0;--i) {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{') {
                if (p.empty() or p.top() != s[i])
                    return false;
                else p.pop();
            } else {
                p.push(memo[s[i]]);
            }
        }
        return p.empty();
    }
};