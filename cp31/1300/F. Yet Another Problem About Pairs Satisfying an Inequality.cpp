#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>

void findAns() {
    int n;
    cin >> n;
    vi a(n);
    vi temp ; 
    for(int i = 0 ; i< n ; i++){
        cin>> a[i] ; 
        if( a[i]< i+1){
            temp.push_back(i+1)  ; 
        }
    }

    int count = 0;
    for(int i = 0 ; i< temp.size() ; i++){
        int x = temp[i]; 
        count += (lower_bound(temp.begin() , temp.end() , a[x-1]) - temp.begin()) ;
    }
    cout << count << '\n';
}

int32_t main() {
    fast_io
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }
}
