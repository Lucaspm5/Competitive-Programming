// Link: https://leetcode.com/problems/move-zeroes/submissions/2054069111/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int &i : nums) {
            if (i != 0)
                swap(i, nums[index++]);
        }
    }
};