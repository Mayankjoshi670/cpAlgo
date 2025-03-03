#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
 

int32_t main() {
    fast_io;
    int a , b  ; 
    cin>> a>> b; 
    vvi cache(a+1 , vi(b+1 , INT_MAX )) ; 
    for(int i = 0; i<= a ; i++){
        for(int j = 0 ; j <= b; j++){
            if(i == j){
            cache[i][j]= 0 ; 
            }
            else {
                
                for(int k = 1 ; k < j ; k++){
                    cache[i][j] = min(cache[i][j] , cache[i][j-k]+cache[i][k]+1) ; 
                }
                for(int  k = 1 ;  k < i ; k++){
                    cache[i][j] = min(cache[i][j] , cache[k][j]+cache[i-k][j]+1)   ; 
                }
            }
        }
    }

    cout << cache[a][b] ; 
        // findAns();
    
}
