// Link: https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        map<int, int> memo;
        for (int &i : nums) ++memo[i];
        int ans = 0;
        for (int &i : nums) {
            if (memo[i] == 1) ans = i;
        }
        return ans;
    }
};