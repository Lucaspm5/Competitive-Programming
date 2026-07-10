// Link: https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=simulation

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (floor(log10(num)) + 1 > 1) {
            int x = 0;
            while (num) {
                x += num % 10;
                num /= 10;
            }
            num = x;
        } 
        return num;      
    }
};

int main() {
    cout << Solution().addDigits(38) << '\n';
    return 0;
}