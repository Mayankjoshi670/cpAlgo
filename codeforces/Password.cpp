//  error in this code codeforces  126B 
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
const int mod = 1e9 + 7 ; 
int power(int base , int x){
    int ans = 1 ; 
    while(x){
        if(x%2 == 0 ){
            base = (base*base)%mod ; 
            x = x/2 ; 
        }
        else {
            ans = (ans*base)%mod ; 
            x-- ; 
        }
    }
    return ans ; 
}

int blacbox(string &s){
    int ans = 0 , prime = 1; 
    for(int i = 0 ; i< s.size() ; i++){
        ans = (ans+((s[i]-'a'+1)*prime)%mod)%mod ; 
        prime =(prime*31)%mod ; 
    }
    return ans ; 
}

bool check(string & s , int len ){
    string p = s.substr(0 , len) ; 
    int plen = len ;
    int slen = s.length() ;
    int phash = blacbox(p) ;
    string temp = s.substr(0 , plen) ;
    int shash = blacbox(p) ; 
    int cnt = 0 ; 
    if(phash ==shash){
        cnt++  ; 
    }  
    int prL = 1 ; 
    int prR = pow(31 , plen) ; 
    for(int i = plen ; i<slen ; i++){
        shash = (shash-((s[i-plen]-'a'+1)*prL)%mod + mod )%mod;
        shash = (shash+((s[i]-'a'+1)*prR)%mod)%mod ; 
        phash = (phash*31)%mod ;
        if(shash == phash)cnt++ ;
        prL = (prL*31)%mod ; 
        prR = (prR*31)%mod ;   
    }
    return cnt>2 ; 

}

void findAns() {
    string s ; 
    cin>> s;
    int n = s.size() ;  
    int hash = 0 ;
    int prime = 1 ; 
    vi h(n) ; 
    for(int i = 0 ; i< n ; i++){
        hash = (hash + ((s[i]-'a'+1)*prime)%mod)%mod ;
        prime = (prime*31)%mod ; 
        h[i] = hash ;  
    }
    hash = 0 ; 
    vi vec ; 
    for(int i = n-1 ; i>= 0 ; i--){
        hash = (hash*31)%mod ; 
        hash = (hash+ (s[i]-'a'+1))%mod ;
        if(hash == h[n-i-1]){
            vec.push_back(n-i-1) ; 
        }
         
    }
    int low = 0 , high = vec.size()-1 ; 
    while(low<=high){
        // int mid = low+(high - low)/2 ;
        int mid = (low+high)>>1  ; 
        if(check(s, vec[mid]+1)){
            low = mid+1 ;
        }
        else {
            high = mid - 1; 
        }
    }
    if(high <0 ){
        cout << "Just a legend"<<'\n' ; 
    }
    else {
        cout << s.substr(0 ,  vec[high]+1)<<'\n' ; 
    }
}

int32_t main() {
    fast_io;
    
        findAns();
    
}
