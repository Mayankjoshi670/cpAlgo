#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define int long long int

void findAns() {
    int n;
    cin >> n;
    vi temp(n);
    for (auto &it : temp) cin >> it;

    int type1 = 0, type2 = 0;
    for (auto &it : temp) { 
        if (it % 10 == 0) type1++;
        else if (it % 10 == 5) {
            it += 5;
            type1++;
        } else {
            type2++;
            while (it % 10 != 2) {
                it += (it % 10);
            }
        }
    }

    sort(temp.begin(), temp.end());

    if (type1 == n) {
        if (temp[0] == temp[n - 1]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        return;
    }

    bool isOk = true;
    for (int i = 1; i < n; i++) {
        if ((temp[i] - temp[i - 1]) % 20 != 0) {
            isOk = false;
            break;
        }
    }

    cout << (isOk ? "Yes\n" : "No\n");
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
