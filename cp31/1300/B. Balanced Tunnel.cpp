#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n ; 
cin>> n ; 
vi a(n) , b(n) ; 
for(int i = 0 ;i < n ; i++){
    cin>> a[i] ; 
    --a[i] ; 
    //  0 based indexing 
} 

for(int i = 0 ;i < n ; i++){
    cin>> b[i] ; 
    --b[i] ; 
    //  0 based indexing 
} 

vi pos(n) , temp(n) ; 
for(int i = 0 ; i< n; i++){
    pos[b[i]] = i ; 
}

for(int i = 0 ; i< n ; i++){
    temp[i] = pos[a[i]] ; 
}
int maxi = -1 ; 
int ans = 0; 
for(int i = 0 ; i< n  ; i++){
    if(temp[i]>maxi){
        maxi = temp[i] ; 
    }
    else {
        ans++  ; 
    }
}
cout << ans << '\n' ; 
return ; 


}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
