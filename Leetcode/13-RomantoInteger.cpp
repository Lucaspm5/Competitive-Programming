// Link: https://leetcode.com/problems/roman-to-integer/description/

#include <bits/stdc++.h>
using namespace std;


/*

I             1
V             5
X             10
L             50
C             100
D             500
M             1000

*/

class Solution {
public:

    int convert(char c) {
        int value = 0;
        switch(c) {
            case 'I':
                value += 1; 
                break;
            case 'V': 
                value += 5;
                break;
            case 'X': 
                value += 10;
                break;
            case 'L':
                value += 50; 
                break;
            case 'C': 
                value += 100;
                break;
            case 'D': 
                value += 500;
                break;
            default:
                value += 1000;
        }
        return value;
    }

    int romanToInt(string &s) {
        int ans = convert(s.back()), n = s.size();
        char last = s.back(); 
        for (int i = n - 2;i >= 0;--i) {
            int value = convert(s[i]);
            if (value < convert(last)) ans -= value;
            else ans += value;
            last = s[i];
        } 
        return ans;
    }
};

int main() {
    string a = "MCMXCIV";
    cout << Solution().romanToInt(a) << '\n';
    return 0;
}