#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void findAns() {
int n , k ;
cin>> n >> k ; 
if(k == 1 ){
    if(isPrime(n)){
        cout << "YES\n" ; 
    }
    else {
        cout << "NO\n" ; 
    }
}    
else {
    if (n == 1 && k == 2) cout << "YES\n";
    else cout << "NO\n";
}
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
