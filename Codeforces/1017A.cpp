#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> students(n);
    for (int i = 0;i < n;++i) {
        int sum = 0;
        for (int j = 0;j < 4;++j) {
            int x; cin >> x;
            sum += x;
        }
        students[i] = {i, sum};
        
    }
    sort(students.begin(), students.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
    });
    int ans = 0;
    for (int i = 0;i < n;++i) {
        if (students[i].first == 0) {
            ans = i;
            break;
        }
    }
    cout << ans + 1 << '\n';
    return 0;
}
