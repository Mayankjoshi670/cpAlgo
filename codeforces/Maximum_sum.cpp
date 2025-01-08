 #include<bits/stdc++.h>
 using namespace std;
 #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 #define vi vector<int>
 #define vvi vector<vector<int>>
 #define ll long long 
 #define int long long int 
 void findAns() {
     int n , k ;
     cin>> n >> k ;
     vi arr(n+1) ;  
    //  for(auto & it : arr)cin>> it ;
    for(int i = 1 ; i<= n ; i++)cin>> arr[i] ;  
    sort(begin(arr)+1, end(arr)) ; 
    for(int i = 1; i<= n; i++){
        arr[i]+= arr[i-1]  ;
    }
    int ans = 0 ; 
    for(int i = 0 ; i<= k ; i++){
        ans = max(ans , arr[n-i]-arr[2*(k-i)]) ; 
    }
    cout << ans << endl ;
    

 }
 
 int32_t main() {
     fast_io;
      int t ; 
      cin>> t; 
      while(t-->0){
         findAns();
      }
     
 }
 
