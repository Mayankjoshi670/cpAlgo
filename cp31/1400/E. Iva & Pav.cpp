#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int
 
void prefix(vvi & pre , int n ){
    for(int i = 1 ; i<= n ; i++){
        for(int j = 0 ; j < 30  ; j++){
            pre[i][j] += pre[i-1][j];
        }
    }
} 

void findAns() {
    int n ; 
    cin >> n ; 
    vi temp(n+1); 
    vvi bits(n+1 , vi (30 , 0 )) ; 
     
    for(int i = 1 ; i <= n ; i++){
        int no ; 
        cin >> no ;
        temp[i] = no ;  
        for(int j = 0 ; j < 30 ; j++){
            if(no & (1 << j)){
                bits[i][j] = 1; 
            }
        }
    }

    // calculate prefix sum 
    prefix(bits , n) ; 
 
    int q ; 
    cin >> q ; 
    while(q--){
        int l , k ; 
        cin >> l >> k ; 

        if(temp[l] < k){
            cout << -1 << " " ; 
            //  because 
            // a & b <= min(a, b)
            continue; 
        }

        int low = l ; 
        int high = n ; 
        int ans = l ; 

        while(low <= high){
            int mid = (low + high) >> 1 ; 
            int no = 0 ; 

            for(int i = 0 ; i < 30 ; i++){
                if(bits[mid][i] - bits[l-1][i] == mid - l + 1){
                    no += (1 << i) ; 
                }
            }

            if(no >= k){
                ans = max(ans , mid) ; 
                low = mid + 1 ; 
            }
            else{
                high = mid - 1 ; 
            }
        }

        cout << ans << " " ; 
    }

    cout << '\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin >> t ; 
    while(t--){
        findAns();
    }     
}
