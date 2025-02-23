#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
set<ll >st  ; 
void findAns() {
int n ; 
cin>> n ; 
if(st.count(n))cout << "YES\n" ; 
else cout << "NO\n" ; 
return ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    for(int i = 2; i<=1000; i++){
        int val = i+1 ; 
        int p = i*i ; 
        for(int cnt = 2 ; cnt <= 20 ;cnt++ ){
         val += p ; 
         if(val>1e6)break ; 
         st.insert(val);
         p*= i ;    
        }
    }
    while(t-->0){
        findAns();
    }     
    
}
 
