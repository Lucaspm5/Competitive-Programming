// Link: https://leetcode.com/problems/plus-one/description/?envType=problem-list-v2&envId=array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.back() < 9) {
            ++digits.back();
            return digits;
        }
        int n = digits.size();
        bool propagation = true;
        for (int i = n - 1;i >= 0 and propagation;--i) {
            if (digits[i] + propagation > 9) {
                digits[i] = 0;
            } else {
                ++digits[i];
                propagation = 0;
            }
        }
        if (propagation) {
            vector<int> newDigits(n + 1);
            for (int i = n - 1;i >= 0;--i) newDigits[i + 1] = digits[i];
            newDigits[0] = 1;
            return newDigits;
        }
        return digits;
    }
};

int main() {
    int n; cin >> n;
    vector<int> a(n);for (int &i : a) cin >> i;
    for (int &i : Solution().plusOne(a))
        cout << i << '\n';
    return 0;
}