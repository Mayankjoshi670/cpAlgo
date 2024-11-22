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
   vi a1(n) , a2(n);
   for(auto & it : a1){
    cin>> it ; 
   }
   for(auto & it : a2){
    cin>> it ; 
   }
       priority_queue<pair<int , int>>pq ; 
    for(int i = 0 ; i< n ; i++){
pq.push({a1[i] , a2[i]}) ; 
    }
    int x  ; 
    if(n%2 != 0 )x = n-1 ; 
    else x = n ;
    // bool faag = false ; 
    int a= 0 ,b = 0 ;  
    while(!pq.empty() and x>0 ){
        int x1 , y1 ; 
        x1= pq.top().first ; 
        y1 = pq.top().second ;     
           pq.pop(); 
        int x2 , y2 ; 
        x2 = pq.top().first ; 
        y2 = pq.top().second ;
        if(max(x1 , y1)> max(x2 , y2 )){
            a++ ; 
        }         
        else if(max(x1 , y1)> max(x2 , y2 )) {
            b++ ; 
        }
    }
    if(a> b ){
        cout << "YES"<<'\n' ; 
    }
    else {
        cout << "NO"<<
    }
}

int32_t main() {
    fast_io;
     int t; 
     cin>> t; 
     while(t-->0){
        findAns();

     }
    
}
