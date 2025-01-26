#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int cntInversion(string s) {
    int one = 0;
    int total = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') one++;
        else total += one;
    }
    return total;
}

void findAns() {
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
  
  
    int cnt = cntInversion(s);

 
    if(cnt % k == 0 &&  cnt<= x) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t-- > 0) {
        findAns();
    }
}
