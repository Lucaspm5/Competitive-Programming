// Link: https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans, memo(1010);
        for (int &i : nums1) memo[i] = 1;
        for (int &i : nums2) {
            if (memo[i]) {
                ans.push_back(i);
                memo[i] = 0;
            }
        }
        return ans;
    }
};