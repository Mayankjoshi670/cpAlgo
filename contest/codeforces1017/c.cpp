#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define sti set<int>
void findAns() {
    int n ; 
    cin>> n ; 
    vvi temp(n , vi(n)) ; 
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>> temp[i][j] ; 
        }
    }

    sti st ; 
    for(int i = 0 ; i< n; i++){
        st.insert(temp[0][i]) ; 
    }
    for(int j = 0 ; j < n ; j++){
        st.insert(temp[j][n-1]) ;
    }
    int missing = -1 ; 
    for(int i = 1 ; i<=2*n ; i++){
        if(st.find(i) == st.end()){
            missing = i ; 
            break ; 
        }
    }

    vi ans(2*n+1) ;
    ans[1] = missing ; 
    for(int i = 0 ; i< n ; i++){
        ans[2+i] = temp[0][i] ;
    }

    for(int i = 1 ; i< n; i++){
        ans[n+2+i-1] = temp[i][n-1] ;
    }

        for(int i =1 ; i<= 2*n ; i++)cout << ans[i] << " ";
        cout << '\n' ; 


}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
