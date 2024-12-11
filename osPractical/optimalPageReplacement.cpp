#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

int predict(vi& fr, int n, vi& val, int idx) {
    int ans = -1, maxi = idx;
    for (int i = 0; i < fr.size(); i++) {
        int j;
        for (j = idx; j < n; j++) {
            if (fr[i] == val[j]) {
                if (j > maxi) {
                    maxi = j;
                    ans = i;
                }
                break;
            }
        }
        if (j == n) {
            return i;
        }
    }
    return (ans == -1) ? 0 : ans;
}

bool isPresent(int val, const vi& fr) {
    return find(fr.begin(), fr.end(), val) != fr.end();
}

void findAns(int frames, int n, vi& val) {
    vi fr;
    int hitCnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPresent(val[i], fr)) {
            hitCnt++;
            continue;
        }
        if (fr.size() < frames) {
            fr.push_back(val[i]);
        } else {
            int idx = predict(fr, n, val, i + 1);
            fr[idx] = val[i];
        }
    }
    cout << "No. of hits = " << hitCnt << '\n';
    cout << "No. of misses = " << n - hitCnt << '\n';
}

int32_t main() {
    fast_io;
    int n, frames;
    cout << "Enter the number of frames and total values followed by the values:\n";
    cin >> frames >> n;
    vi val(n);
    for (auto& it : val) cin >> it;
    findAns(frames, n, val);
}
