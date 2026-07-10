#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        char a, b, c, d, e, f, g, h, i; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i; 
        auto solve = [&](char a, char b, char c) -> bool {
            set<char> st {a, b, c};
            return (st.size() == 1 and *st.begin() != '.');
        };
        if (solve(a, b, c)) cout << a; 
        else if (solve(d, e, f)) cout << d;
        else if (solve(g, h, i)) cout << g;
        else if (solve(a, d, g)) cout << a;
        else if (solve(b, e, h)) cout << b;
        else if (solve(c, f, i)) cout << c;
        else if (solve(a, e, i)) cout << a;
        else if (solve(c, e, g)) cout << c;
        else
            cout << "DRAW";
        cout << '\n';
    }
    return 0;
}