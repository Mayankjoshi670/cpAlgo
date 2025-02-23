// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// void findAns() {
// int n ; 
// cin>> n ; 
// vi a(n) ; 
// for(auto & it : a)cin>> it ; 
// priority_queue<int , vector<int>, greater<int>>pq ; 
// for(int i  = 0 , no  ; i< n ; i++){
//     no = a[i]  ; 
//     pq.push(no) ;
//     while(!pq.empty() && pq.size() > pq.top()){
//         pq.pop() ; 
//     }
//     cout << pq.size() << " " ; 
// }    
// cout << '\n' ; 
// }

// int32_t main() {
//     fast_io;
//     int t = 1 ; 
//     cin>> t ; 
//     while(t-->0){
//         findAns();
//     }     
    
// }
 


//  using bs 
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
    vi arr(n) ; 
    for(auto & it : arr)cin>> it ; 
    int l = 0 ; 
    for(int i = 0 ; i< n ; i++){
        while(arr[l] < i-l+1){
            l++ ;
        }
        cout << i - l + 1 << " " ;
        //  we can do bs also here 
    }
    cout << '\n' ;
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
 
