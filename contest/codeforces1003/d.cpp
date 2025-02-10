#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define ll long long 

ll find(vll &arr) {
    ll sum = 0, ans = 0;
    for (ll it : arr) {
        sum += it; 
        ans += sum;
    }
    return ans;
}

void findAns() {
    ll n, m;
    cin >> n >> m;
    vvll arr(n, vll(m, 0));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    sort(begin(arr), end(arr), [](const vll &a, const vll &b) {
        ll sumA = accumulate(a.begin(), a.end(), 0LL);
        ll sumB = accumulate(b.begin(), b.end(), 0LL);

        ll totalSumA = 0, sumA_partial = 0;
        for (ll num : a) {
            sumA_partial += num;
            totalSumA += sumA_partial;
        }

        ll totalSumB = 0, sumB_partial = 0;
        for (ll num : b) {
            sumB_partial += num;
            totalSumB += sumB_partial;
        }

        if (sumA != sumB)
            return sumA > sumB;
        return totalSumA > totalSumB;
    });

    vll ans;
    for (auto &it : arr) {
        for (ll itt : it) {
            ans.push_back(itt);
        }
    }

    cout << find(ans) << endl;
}

int main() {
    fast_io;
    ll t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}