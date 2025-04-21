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
    string result = "";
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            result += s[i];
        } else {
            if (s[i] == result.back()) {
                int x = (s[i] - 'a' + 1) % 26;
                char nextChar = 'a' + x;

                if (i + 1 < n && nextChar == s[i + 1]) {
                    x = (s[i] - 'a' - 1 + 26) % 26;   
                    nextChar = 'a' + x;
                }

                result += nextChar;
            } else {
                result += s[i];
            }
        }
    }
    
    cout << result;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
