// Link : https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;

/*

[-4, -1, -1, 0, 1, 2]

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0;i < n - 2;++i) {
            if (i > 0 and nums[i] == nums[i-1]) continue;
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k and nums[j] == nums[j+1]) ++j;
                    while (k > j and nums[k] == nums[k-1]) --k;
                    ++j, --k;
                }
                else if (sum > 0) --k;
                else ++j;
            } 
        }
        return ans;
    }
};

int main() {
    vector<int> nums {-4, -1, -1, 0, 1, 2};
    auto ans = Solution().threeSum(nums);
    for (int i = 0;i < ans.size();++i) {
        for (int j = 0;j < 3;++j) cout << ans[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}