#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int cntNo(string& s, int i) {
    int n = s.length();
    int cnt = 0;   
    while (i < n) {
        if (s[i] == '0') {
            while (i < n && s[i] == '0') {
                i++;
            }
            cnt++;
        } else {
            while (i < n && s[i] == '1') {
                i++;
            }
            cnt++;
        }
    }
    return cnt;
}

void findAns() {
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    
    int i = 0;  
    while (i < n && s[i] == '0') {
        i++; 
    }

    if (i >= n) {
        cout << 0 << endl; 
        return; 
    }

    cout << cntNo(s, i) << '\n';
}

int32_t main() {
    fast_io;
    int t; 
    cin >> t; 
    while (t--) {
        findAns();
    }     
}
