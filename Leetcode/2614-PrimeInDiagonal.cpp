// Link: https://leetcode.com/problems/prime-in-diagonal/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        auto is_prime = [&](int x) -> bool {
            if (x == 2) return true;
            if (~x & 1 or x == 1) return false;
            for (int i = 3;i * i <= x;i += 2) {
                if (x % i == 0) return false;
            }
            return true;
        };
        int ans = 0;
        for (int i = 0;i < nums.size();++i) {
            if(is_prime(nums[i][i])) ans = max(ans, nums[i][i]);
        }
        for (int i = 0;i < nums.size();++i) {
            if (is_prime(nums[i][nums.size() - i - 1])) ans = max(ans, nums[i][nums.size() - i - 1]);
        }
        return ans;
    }
};