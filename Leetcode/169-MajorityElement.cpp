// Link: https://leetcode.com/problems/majority-element/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> memo;
        int ans = 0, maxf = 0;
        for (int &i : nums) {
            if (++memo[i] > maxf) {
                maxf = memo[i];
                ans = i;
            }
        }
        return ans;
    }
};