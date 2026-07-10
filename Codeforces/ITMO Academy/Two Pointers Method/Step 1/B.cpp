#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, j = 0; cin >> n >> m;
    vector<int> a(n); for (int &i : a) cin >> i;
    vector<int> b(m); for (int &i : b) cin >> i;
    for (int i = 0;i < m;++i) {
        while (j < n and b[i] > a[j]) ++j;
        cout << j << (i < m - 1 ? ' ' : '\n');
    }
    return 0;
}