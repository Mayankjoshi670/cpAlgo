#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int a , b , k ; 
cin>> a>> b >> k; 
 

int diff = abs(a - b);
if (diff == k) {
    cout << 0 << "\n";
    return;
}

int total = a + b;
if (k > total || (total - k) % 2 != 0) {
    cout << -1 << "\n";
    return;
}

cout << abs(k - diff) / 2 << "\n";
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
