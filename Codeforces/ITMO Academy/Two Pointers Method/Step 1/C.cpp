#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    map<int, ll> freq;
    for (int i = 0;i < n;++i) {
        int x; cin >> x;
        ++freq[x];
    }
    ll ans = 0;
    for (int i = 0;i < m;++i) {
        int x; cin >> x;
        ans += freq[x];
    }
    cout << ans << '\n';
    return 0;
}