// Link: https://leetcode.com/problems/excel-sheet-column-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string& columnTitle) {
        int n = columnTitle.size(), ans = 0, b = 1;
        for (int i = 0;i < n - 1;++i) b *= 26;
        for (int i = 0;i < n;++i, b /= 26) {
            int a = (columnTitle[i] - 'A' + 1);
            ans += a * b;
        }
        return ans;
    }
};

int main() {
    string s = "FXSHRXW";
    cout << Solution().titleToNumber(s) << '\n';
    return 0;
}