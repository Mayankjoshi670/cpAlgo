#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
bool check(int pos, int neg, int a, int b) {
    int diff = pos - neg;
    int lhs = a - b;
    int rhs = -diff * b;

    if (lhs == 0) {
        return rhs == 0; // a == b => only works if pos == neg
    }

    return rhs % lhs == 0;
}

void findAns() {
    int x ; 
    cin>> x ; 
    string s ; 
    cin>> s ; 
    int pos = count(s.begin() , s.end() , '+');
    int neg = x - pos ; 

    int n ; 
    cin>> n; 
    for(int i = 0 ; i< n; i++){
        int a , b ; 
        cin>> a >> b ; 
        if(check(pos , neg , a , b )){
            cout << "YES\n" ; 
        }
        else {
            cout<< "NO\n" ; 
        }
    }
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    // cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
