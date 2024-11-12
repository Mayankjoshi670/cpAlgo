#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
int temp = 1000 ;
    int x = 0, y = 0;   
 
    for (int i = 0; i < temp * n; i++) {
        if (x == a && y == b) {
            cout << "YES" << '\n';
            return;
        }
        char dirr = s[i % n];
        if (dirr == 'E') {
            x++;
        } else if (dirr == 'S') {
            y--;
        } else if (dirr == 'W') {
            x--;
        }
        else if (dirr == 'N') {
            y++;
        }
    }

    cout << "NO" << '\n';
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
    return 0;
}