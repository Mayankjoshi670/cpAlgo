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

    if (n % 2 == 0) {
        cout << -1 << "\n";
        return;
    }

    cout << n << " ";
    for (int i = 1; i < n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin >> t ; 
    while(t-- > 0){
        findAns();
    }     
}
