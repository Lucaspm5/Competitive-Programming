// Link: https://leetcode.com/problems/add-binary/description/?envType=problem-list-v2&envId=simulation

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int propagation = 0, n = a.size(), m = b.size();
        string ans = "";
        for (int i = max(n, m) - 1, j = min(n, m) - 1;i >= 0 or propagation;--i, --j) {
            int bit = 0;
            if (i >= 0) {
                if (n > m) {
                    bit += (a[i] - '0');
                    if (j >= 0)
                        bit += (b[j] - '0');
                }
                if (m >= n) {
                    bit += (b[i] - '0');
                    if (j >= 0)
                        bit += (a[j] - '0');
                }
            }
            bit += propagation;
            if (propagation) propagation = 0;
            switch(bit) {
                case 0:
                    ans = '0' + ans; break;
                case 1: 
                    ans = '1' + ans; break;
                case 2:
                    ans = '0' + ans; 
                    propagation = 1;
                    break;
                default:
                    ans = '1' + ans; 
                    propagation = 1;
                    break;
            }
        }
        return ans;
    }
};

int main() {
    string a, b; cin >> a >> b;
    cout << Solution().addBinary(a, b) << '\n';
    return 0;
}