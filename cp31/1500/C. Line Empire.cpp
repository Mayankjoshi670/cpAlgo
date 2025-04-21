#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
int n , a , b ; 
cin >> n >> a >> b ; 
vi given(n) ,prefix(n) ; 
for(int i = 0  ; i  < n ; i++){
    cin>> given[i] ; 
    if(i == 0 ){
        prefix[i] = given[i] ; 
    }
    else{
        prefix[i] = prefix[i-1]+ given[i] ; 
    }
}    

int ans = b* prefix[n-1] ; 
int prev   = b* given[0] ;
for(int i = 0 ; i< n ; i++){
   ans = min(ans, prev + (given[i] * a) + ((prefix[n - 1] - prefix[i]) - ((n - 1 - i) * given[i])) * b);

    if(i+1 != n )
    prev+= (given[i+1]-given[i])*b ; 
} 
cout << ans << '\n' ; 

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
