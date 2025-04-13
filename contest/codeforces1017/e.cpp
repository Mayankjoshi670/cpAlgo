#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n; 
    cin >> n;
    vi a(n);
    for (auto & it  : a) cin >> it ;

    vvi bits(30, vi(2, 0));
    for (auto it: a) {
        for (int j = 0; j < 30; j++) {
            int bit = (it >> j) & 1;
            bits[j][bit]++;
        }
    }

    int maxi = 0;

    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < 30; j++) {
            int bit = (a[i] >> j) & 1;
            if (!bit) {
                curr += (1LL << j) * bits[j][1];
            } else {
                curr += (1LL << j) * bits[j][0];
            }
        }
        maxi = max(maxi, curr);
    }

    cout << maxi << '\n';
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
}
