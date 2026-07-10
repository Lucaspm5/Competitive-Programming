#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    vector<pair<int, int>> comp(3); for (auto &[i, j] : comp) cin >> i >> j;
    for (int i = 0;i < 100;++i) {
        int a = i % 3, b = (i + 1) % 3;
        int x = min(comp[a].second, comp[b].first - comp[b].second);
        comp[a].second -= x;
        comp[b].second += x;
    }
    freopen("mixmilk.out", "w", stdout);
    for (auto &[i, j] : comp) cout << j << '\n';
    return 0;
}