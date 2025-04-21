#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long

bool check(int b, int g) {
    return b <= 2 * g;
}

void findAns() {
    int n;
    string s;
    cin >> n >> s;

    int b = 0, g = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') b++;
        else g++;

        if (!check(b, g)) {
            cout << b + g  << '\n';  
            return;
        }
    }

    
    cout << b + g << '\n';
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
