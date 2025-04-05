#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , k ; 
cin>> n >> k ; 
vi input(n)  ; 
for(auto & it : input)cin>> it ; 
int cnt = 1 ; 
int ans = 0 ; 
for(int i = 1 ; i< n ; i++){
    if(input[i-1] < input[i]*2)cnt++ ; 
    else cnt = 1 ; 
    if(cnt> k )ans++ ; 
}    
cout << ans << endl  ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
