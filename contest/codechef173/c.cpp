// // Overwrite
 #include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 

void findAns() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

    int idx = min_element(b.begin(), b.end()) - b.begin();
    rotate(b.begin(), b.begin() + idx, b.end());

    for (int i = 0; i <= n - m; i++) {
        bool flag = true;

        for (int j = i; j < i + m; j++) {
            if (b[j - i] > a[j]) {
                flag = false;
                break;
            }
            else if(b[j-i] == a[j]){
                continue;
            }
            else {
                flag = true ; 
                break ; 
            }
        }

        if (flag) {
            copy(b.begin(), b.end(), a.begin() + i);
        }
    }

    for(int i = 0 ; i< n ; i++){
        cout << a[i] << " " ; 
    }
    cout << endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
}
