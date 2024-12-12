#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define d double 
int fact(int n) {
    if (n == 0 || n == 1) return 1;
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

void findAns(int n ) {
        vi a(n) ; 
        vvi b(n , vi(n)) ;
        cout << "enter the val of  a " <<endl ; 
        for(auto & it :a)cin>>it ; 
        cout << "enter the val of b "<<endl ; 
        for(int i = 0 ; i< n ; i++){
           int no ; 
            cin >> no ;
            b[i][0] = no ; 
        }
for (int j = 1; j < n; j++) {
    for (int i = n-1; i >= j; i--) {
        b[i][j] = b[i][j-1] - b[i-1][j-1];
    }
}


        cout << "\backward Difference Table:\n";
        for (int i = 0; i < n; i++) {
         cout << setw(10) << a[i];
        for (int j = 0; j < n - i; j++) {
        cout << setw(10) << b[i][j];
        }
         cout << endl;

 }


//   forward interpolation formula 

// f(a+uh) = f(a)+u1/1!del f(a)+ u2/2! delf(a) ... 
d interpolate ; 
cin>> interpolate ; 
double h = a[1] -a[0]  ; 
d u = (interpolate - a[n-1])/h ; 
d yp = b[n-1][0] ; 

for(int i = 1; i< n ; i++){
    double no = b[n-1][i] ; 
    for(int j = 1 ; j<= i ; j++){
        no *=(u + j-1 ) ; 
    }
    no /= fact(i) ; 
    yp+= no ;  
}
cout << "interpolate value is"<< yp <<endl ; 
}

int32_t main() {
    fast_io;
     int n ; 
     cin>> n  ; 
        findAns(n);
    
}
