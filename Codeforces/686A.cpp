#include <bits/stdc++.h>
using namespace std;

pair<int, long long> ans {0, 0};

int main() {
    int n, x; cin >> n >> x;
    ans.second = x;
    for (int i = 0;i < n;++i) {
        int d; char c;
        cin >> c >> d;
        if (c == '+') ans.second += d;
        else {
            if (ans.second - d >= 0) ans.second -= d;
            else ++ans.first;
        }
    }
    cout << ans.second << ' ' << ans.first << '\n';
    return 0;
}