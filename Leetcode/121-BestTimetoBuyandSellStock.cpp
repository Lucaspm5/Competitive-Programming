// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2062128872/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), _mx = prices[0], _mn = prices[0], ans = 0;
        for (int i = 1;i < n;++i) {
            if (prices[i] < _mn) {
                ans = max({ans, 0, _mx - _mn});
                _mn = prices[i];
                _mx = 0;
            } else if (prices[i] > _mx) _mx = prices[i];
        }
        return max({ans, 0, _mx - _mn});
    }
};