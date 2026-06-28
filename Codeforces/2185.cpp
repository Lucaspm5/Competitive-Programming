#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, maximum = 0; cin >> n;
        for (int i = 0;i < n;++i) {
            int x; cin >> x;
            maximum = max(maximum, x);
        }
        cout << (maximum * n) << '\n';
    }
    return 0;
}
