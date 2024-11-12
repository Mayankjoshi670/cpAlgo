#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

const int prime = 31;
const int mod = 1e9 + 7;

void findAns(){
    int n ; 
    cin>> n ; 
    while(n!= 1){
        cout<< n << " " ; 
        if(n& 1ll)n = n*3+1; 
        else n/=2 ; 
    }
    cout << 1 ; 
}
int32_t main() {

    fast_io;
    findAns();
}
