#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns(int n ) {
set<pair<int , int>>st ;
set<pair<int , int >>stt  ; 
int drow[4] = {-1, 0, 1, 0}; 
int dcol[4] = {0, 1, 0, -1}; 
stt.insert({0 ,0 }) ;  
for(int i = 0 ; i< n ; i++){
    if(!i%2){
        //  go in all 4 directions
        for(auto it : stt){
            int x = it.first ; 
            int y = it.second ; 
            for(int j = 0 ; j < 4 ; j++){
                int nx = x + drow[j] ;
                int ny = y + dcol[j] ;
                if( st.find({nx , ny}) == st.end()){
                    // st.insert({nx , ny}) ;
                    stt.insert({nx , ny}) ;
                }
            }
        }  
    }
    else {
        // only 2 direction either left or right  
    }
}

}

int32_t main() {
    fast_io;
    int n ; 
    cin>> n ; 
        findAns(n);
    
}
