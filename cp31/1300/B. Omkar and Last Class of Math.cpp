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
int ans = 0 ; 
for(int i =2 ; i<= 100000 ; i++){
    if(n%i  == 0 ){
        ans = i ; 
        break ; 
    }
}   
if(ans == 0 ){
ans = n ; 
} 
cout << (n/ans) << " "<< (n - n/ans)<<'\n' ;
return ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
