#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
  int n , k  ;
  cin>> n >> k ; 
  multiset<int>st ; 
  for(int i = 0 ; i< n;i++){
    int no ;
    cin>> no ; 
    st.insert(no) ; 
  }  
  int ans = 1 ; 
  int high = k ;
  while(!st.empty()){
    auto itr = st.upper_bound(high) ; 
    if(itr == st.begin()){
        high = k ; 
        ans++ ; 
    }
    else {
        itr-- ;
        int val = *itr ; 
        high -= val ; 
        st.erase(itr) ; 
    }
  }
  cout<< ans << '\n' ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
