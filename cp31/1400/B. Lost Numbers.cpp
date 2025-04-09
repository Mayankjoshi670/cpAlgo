#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define int long long

void findAns() {
    vi given = {4, 8, 15, 16, 23, 42};
    vi prod(4);

    for (int i = 0; i < 4; i++) {
        cout << "? " << i + 1 << " " << i + 2 << '\n';
        cout.flush();
        cin >> prod[i];
    }

    vi ans(6);
    sort(given.begin(), given.end());

    do {
        if (given[0] * given[1] == prod[0] &&
            given[1] * given[2] == prod[1] &&
            given[2] * given[3] == prod[2] &&
            given[3] * given[4] == prod[3]) {
            ans = given;
            break;
        }
    } while (next_permutation(given.begin(), given.end()));

    cout << "! ";
    for (auto it : ans) cout << it << " ";
    cout << '\n';
    cout.flush();
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
