// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 

// const int mod = 1e9 + 7;   

// void findAns() {
//     int n;
//     cin >> n;
//     vi dp(n + 1, 0);
//     dp[0] = 1; // B  Only one way to get sum 0 (take nothing)
    
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= 6 && j <= i; j++) {
//             dp[i] = (dp[i] + dp[i - j]) % mod;
//         }
//     }
    
//     cout << dp[n] << endl;
// }

// int32_t main() {
//     fast_io;
//     findAns();
// }




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
string s ; 
cin>> s; 
int dash = count(s.begin()  , s.end() , '-') ; 
int under = count(s.begin()  , s.end()  , '_') ;
    if(dash < 2 || under <1 ){
        cout << 0 << '\n' ; 
        return ; 
    }
    int l = dash/2 ; 
    int r = dash - l ; 
     cout << under*l*r << '\n' ; 
     return ; 

}

int32_t main() {
    fast_io;
   int t ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
