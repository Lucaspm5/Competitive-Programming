// Link: https://leetcode.com/problems/length-of-last-word/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), i = n - 1;
        while (i >= 0 and s[i] == ' ') {
            --i;
            --n;
        }
        while (i >= 0 and s[i] != ' ') --i;
        return (i < 0 ? n : n - (i + 1));
    }
};

int main() {
    string s; getline(cin, s);
    //cin.ignore();
    cout << Solution().lengthOfLastWord(s) << '\n';
    return 0;
}