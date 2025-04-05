#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int
bool isPossible(vi & val , int mid){
    int temp = 0 ; 
    for(int i = 0 ; i< val.size()-1  ; i++){
        if(val[i] <= mid ){
            // we can give some other taks to him 
            // calculate how much we can extra add 
            if(temp == 0 ) return true ; 
            else {
                int leftSpace = (mid - val[i])/2 ; 
                temp -= leftSpace ; 
                temp = max(0LL , temp) ;  
            }
        }
        else {
            int extra =  val[i]- mid  ; 
            temp+= extra ; 
        }
    }
    return (temp== 0) ? true : false ; 
} 
void findAns() {
int n , m ; 
cin>> n>>  m ; 
vi inpt(m) ; 
vi val(n+1 , 0 ) ; 
for(auto & it : inpt)cin>> it ; 
for(auto it : inpt){
    val[it]++  ; 
}

int low = 0 ; 
int high = LLONG_MAX ; 
int ans = 0 ; 
sort(rbegin(val) , rend(val) ) ; 
while(low <= high ){
    int mid = (low+high )>> 1 ; 
    if(isPossible(val , mid )){
        ans = mid ; 
        high = mid-1 ; 
    }
    else {
        low  = mid+1 ; 
    }
}
cout << ans << endl ; 
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
