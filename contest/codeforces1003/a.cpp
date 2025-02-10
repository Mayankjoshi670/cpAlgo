#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int 

void findAns() {
    string s; 
    cin >> s; 
    int n = s.length();
    string res;

    if (n >= 2 && s.substr(n - 2, 2) == "us") {
        res = s.substr(0, n - 2) + "i";
    } else {
        res = s;
    }

    cout << res << endl; 
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }     
}
