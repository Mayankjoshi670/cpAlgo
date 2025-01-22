#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int , int>>

void findAns() {
    int n, m;
    cin >> n >> m;
    vvi arr(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int no;
            cin >> no;
            arr[i].push_back(no);
        }
    }

    for (int i = 0; i < n; i++) {
        sort(begin(arr[i]), end(arr[i]));
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != arr[i][0] + j * n) {
                cout << "-1\n";
                return;
            }
        }
    }

    vpi temp;
    for (int i = 0; i < n; i++) {
        temp.push_back({arr[i][0], i});
    }

    sort(begin(temp), end(temp));

    for (int i = 0 ; i< n ; i++) {
        cout << temp[i].second+1 << " ";
    }
    cout << "\n";
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }
    return 0;
}
