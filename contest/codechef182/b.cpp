#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int temp, k, cnt;
    cin >> temp >> k >> cnt;

    vi res(temp);
    for (int i = 0; i < temp; ++i) {
        cin >> res[i];
    }

    sort(res.begin(), res.end());
    vi nxt(temp, 1); 
    int ans = 0;

    for (int day = 1; day <= cnt; ++day) {
        vi avail;
        for (int i = 0; i < temp; ++i) {
            if (nxt[i] <= day) {
                avail.push_back(i);
            }
        }

        int extra = avail.size() - k;
        if (extra > 0) {
            for (int i = 0; i < extra; ++i) {
                int j = avail[i];
                nxt[j] = day + res[j];
                ans++;
            }
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    fast_io;
    int x = 1 ; 
    cin >> x ; 
    while (x-- > 0) {
        findAns();
    }     
}
