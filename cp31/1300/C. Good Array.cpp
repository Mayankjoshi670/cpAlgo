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
vi input(n) ; 
for(auto & it : input )cin >> it ; 
int total = accumulate(begin(input) , end(input) , 0LL) ; 
unordered_map<int , vector<int>>mpp ; 
for(int i = 0 ; i< n ; i++){
    mpp[input[i]].push_back(i) ; 
}

int cnt = 0 ; 
vi res ; 
for(int i = 0 ; i< n ; i++){
int val = input[i] ; 
int temp = total - val ; 
if(temp&1){
    // if no is odd 
    continue ;
}
else {
    int target = temp / 2 ; 
    if(mpp.find(target)!= mpp.end() ){
        if(mpp[target].size() == 1 and mpp[target][0] == i){
             continue; 
        }
        else {
            cnt++ ; 
            res.push_back(i+1) ;
        }
         
    }
}
}
if(cnt == 0 ){
    cout << 0 << '\n' ; 
    return ; 
}
cout << cnt << '\n' ;
for(auto it :res)cout << it << " "  ; 
cout << endl ; 
    
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
