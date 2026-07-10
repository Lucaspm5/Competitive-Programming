#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m); 
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    int i = 0, j = 0, index = 0;
    vector<int> res(n + m);
    while (i < n or j < m) {
        res[index++] = (j == m or (i < n and a[i] < b[j]) ? a[i++] : b[j++]);
    }
    for (i = 0; i < index; ++i)
        cout << res[i] << (i < index - 1 ? ' ' : '\n');
    return 0;
}