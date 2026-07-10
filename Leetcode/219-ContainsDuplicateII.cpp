// Link : https://leetcode.com/problems/contains-duplicate-ii/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> dist;
        bool ans = false;
        for (int i = 0;i < n and !ans;++i) {
            if (dist.count(nums[i])) {
                ans = (i - dist[nums[i]]  <= k);
                dist[nums[i]] = i; 
            } else
                dist[nums[i]] = i;
        }
        return ans;
    }
};

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n); for (int &i : a) cin >> i;
    cout << Solution().containsNearbyDuplicate(a, k) << '\n';
    return 0;
}