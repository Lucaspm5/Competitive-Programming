// Link : https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0] = {1};
        if (numRows > 1) ans[1] = {1, 1};
        for (int i = 1;i < numRows - 1;++i) {
            vector<int> line;
            line.push_back(1);
            for (int j = 1;j < ans[i].size();++j)
                line.push_back(ans[i][j] + ans[i][j - 1]);              
            line.push_back(1);
            ans[i + 1] = line;
        }
        return ans;   
    }
};

int main() {
    int n; cin >> n;
    for (int i = 1;i <= n;++i) { 
        auto ans = Solution().generate(i);
        for (int j = 0;j < i;++j) {
            for (int k = 0;k < ans[j].size();++k) cout << ans[j][k];
            cout<< '\n';
        }
        cout << '\n';
    }
    return 0;
}