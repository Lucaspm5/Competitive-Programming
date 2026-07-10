// Link: https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return index;
    }
};

int main() {
    vector<int> x {1, 2, 3};
    cout << Solution().searchInsert(x, 5) << '\n';
    return 0;
}