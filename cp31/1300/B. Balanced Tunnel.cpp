// WRONG 
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi  vector<pair<int , int>>
void findAns() {
int n ; 
cin>> n ; 
vpi st , ed ; 
for(int i = 1 ; i<= n; i++){
    int x ; 
    cin>> x ; 
    st.push_back({x , i}) ;
}

for(int i = 1 ; i<= n; i++){
    int x ; 
    cin>> x ; 
    ed.push_back({x , i}) ;
}

sort(st.begin(), st.end()) ;
sort(ed.begin(), ed.end()) ;
vi res(n)  ; 
for(int i = 0 ; i< n ; i++){
    res[i] = ed[i].second - st[i].second ; 
}
cout << max(0LL ,  *max_element(res.begin() , res.end()))<<endl ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
