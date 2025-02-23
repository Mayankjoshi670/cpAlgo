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
    for(auto & it : a)cin>> it ; 
    for(auto & it : b)cin>> it ; 
    vi temp(n) ; 
    int maxi = LLONG_MIN ; 
    for(int i = 0 ; i < n ; i++){
        temp[i] = a[i] - b[i] ; 
    }
    maxi = *max_element(begin(temp) , end(temp) );
    int ans = count(temp.begin() , temp.end() , maxi);
    cout << ans<<endl ; 
    for(int i = 0 ; i< n ; i++){
        if(temp[i] == maxi){
            cout << i+1 << " " ; 
        }
    }
    cout << endl  ; 
    return ;     
}
int32_t main() {
    fast_io;
    int t; 
    cin>> t; 
    while(t-->0){
        findAns();
    }     
    
}
