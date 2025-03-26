#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
 
void findans() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    for (int i = 0; i < n; i++) {
        int pivot = a[i];
        vector<pair<int, int>> temp;
        
        for (int j = 0; j < n; j++) {
            temp.push_back({abs(a[j] - pivot), a[j]});
        }
        
        sort(temp.begin(), temp.end());
        vector<int> ans;
        
        for (auto& p : temp) {
            ans.push_back(p.second);
        }
        
        if (ans == b) {cout <<  i + 1<<endl ;
            return ; }
    }
    cout <<  -1 << endl ;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
       
        findans() ; 
    }
    return 0;
}
