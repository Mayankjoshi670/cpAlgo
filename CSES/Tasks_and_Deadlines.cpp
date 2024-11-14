#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int, int>>

void findAns() {
    int n; 
    cin >> n; 
    vpi arr(n); 
    for(int i = 0; i < n; i++) {
        int a, d; 
        cin >> a >> d; 
        arr[i] = {a, d};
    }
 
    sort(begin(arr), end(arr), [](pair<int, int>& a, pair<int, int>& b) {
        if(a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    });

    int profit = 0;
    int timeSpent = 0;
    for(auto& it : arr) {
        timeSpent += it.first;  
        profit += it.second - timeSpent;   
    }
    cout << profit << '\n';
}

int32_t main() {
    fast_io;
    findAns();
}
