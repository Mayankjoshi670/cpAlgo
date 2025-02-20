#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    int m ; 
    cin>> n >> m  ; 
    vi a(n);
    a[0] = 1;   
    for (int i = 1; i < n; i++) {
    cin >> a[i];
    }

    vi b(n) ; 
    for(int i = 0 ; i< n ; i++){
        cin>> b[i] ;
    }
    sort(begin(a) , end(a)) ; 
    sort(begin(b) , end(b)) ; 
    int i =  0 , j  = 0 ; 
    int cnt = 0 ; 
    while(i < n and j < n ){
        if(a[i] < b[j]){
            cnt++ ;
            i++  , j++ ;  
        }
        else{
            j++ ; 
        }
    }
    cout << n - cnt << endl ; 
    return ; 
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
