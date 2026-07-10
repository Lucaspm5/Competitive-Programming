// Link: https://leetcode.com/problems/missing-number/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0;
        for (int i = 0;i < nums.size();++i) sum += nums[i];
        int n = nums.size();
        return (n * (n + 1)) / 2 - sum;
    }
};