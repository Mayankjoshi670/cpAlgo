#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
    int n ; 
    cin >> n ; 
    vi arr(n ) ;
    vi freq(n+1, 0 ) ;    
    for(int i = 0 ; i< n  ; i++){
        int no  ; 
        cin>> no ; 
        arr[i] = no ;
        freq[no]++ ; 
        
    }
    for(int i = 1 ; i<= n ; i++){
        if(freq[i] == 1){
            cout << "No"<<endl ;
            return ;  
        }
        else if (freq[i] != 0 ) {
            if(i+1 <= n ){
                freq[i+1] += freq[i]-2 ; 
            }
            freq[i] =2 ; 
        }
    }
    if(freq[n]%2){
        cout << "No"<<endl ; 
    }
    else {
        cout << "Yes"<<endl ;
    }
     
}

int32_t main() {
    fast_io;
    int t ; 
    cin>> t  ; 
    while(t-->0){
        findAns();
    }     
    
}
