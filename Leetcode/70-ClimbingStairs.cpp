//Link: https://leetcode.com/problems/climbing-stairs/submissions/2061098040/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> xs(n+2);
        xs[0] = 0, xs[1] = 1;
        for (int i = 2;i <= n+1;++i) xs[i] = xs[i-1] + xs[i-2];
        return xs[n+1];
    }
};

int main() {
    int n; cin >> n;
    cout << Solution().climbStairs(n) << '\n';
    return 0;
}