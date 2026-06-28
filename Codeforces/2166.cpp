#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, is_odd = 0, is_even = 0; cin >> n;
        vector<int> a(n);
        for (int &i : a) {
            cin >> i;
            is_odd |= (i & 1), is_even |= (~i & 1); 
        }
        auto solve = [&]() -> vector<int> {
            if (is_odd and is_even) sort(a.begin(), a.end());
            return a;
        };
        auto ans = solve();
        for (int i = 0;i < n;++i)
            cout << ans[i] << (i < n - 1 ? ' ' : '\n');
    }
    return 0;
} 
