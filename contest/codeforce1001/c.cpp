#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
int total (vi diff ){
  return   accumulate(diff.begin(), diff.end(), 0LL);
}
void findAns() {
    int n ; 
    cin>> n ; 
    vi arr(n) ; 
    for(auto & it : arr)cin >> it ; 
    int ans =total(arr)  ; 
    int flag = true ; 
    while(flag){
        if(arr.size() ==1){
            flag = false ; 
            ans = max(ans , (ll)arr[0]) ;
            break ; 
        }
        vi diff ; 
        for(int j = 0  ;j < arr.size()-1 ; j++){
            diff.push_back(arr[j] - arr[j+1]) ;
        }
    if (total(diff) < 0) {
            for (int &itt : diff) itt = -itt;
        }
        ans = max(ans, total(diff));
        reverse( begin(diff),  end(diff));
        arr = diff;
    }
    cout<< ans << '\n' ;
}

int32_t main() {
    fast_io;
    int t; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
