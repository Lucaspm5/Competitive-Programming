#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    vector<int> limit(110);
    int n, m, pos = 0; cin >> n >> m;
    for (int i = 0;i < n;++i) {
        int x, y; cin >> x >> y;
        for (int j = 0;j < x;++j) limit[pos++] = y;
    }
    pos = 0;
    int ans = 0;
    for (int i = 0;i < m;++i) {
        int x, y; cin >> x >> y;
        for (int j = 0;j < x;++j) ans = max(ans, y - limit[pos++]);
    }
    freopen("speeding.out", "w", stdout);
    cout << ans << '\n';
    return 0;
}