#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    int n, ans = 0; cin >> n;
    vector<int> label(3); iota(label.begin(), label.end(), 1);
    vector<int> freq(4);
    for (int i = 0;i < n;++i) {
        int a, b, g; cin >> a >> b >> g;
        --a, --b, --g;
        swap(label[a], label[b]);
        ans = max(ans, ++freq[label[g]]);
    }
    freopen("shell.out", "w", stdout);
    cout << ans << '\n';
    return 0;
}