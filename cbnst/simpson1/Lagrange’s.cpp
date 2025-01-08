// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
// #define d double 
// d findAns(vector<d>&x , vector<d>&y , d n, d xp   ) {
//     d yp = 0; 
//     for(int i =0 ; i< n ; i++){
//         d no = y[i] ; 
//         for(int j = 0 ; j< n ; j++){
//             if(i!= j ){
//                 no*= (xp - x[j])/(x[i]-x[j]) ; 
//             }
//         }
//         yp+= no  ; 
//     }
//     return yp ; 
// }

// int32_t main() {
//   fast_io;
//     int n;
//     cin >> n;
//     vector<d> x(n), y(n);
//     for (auto& it : x) cin >> it;
//     for (auto& it : y) cin >> it;
//     d xp;
//     cin >> xp;
//     d yp = findAns(x, y, n, xp);
 
//     cout <<  yp << endl;

//     return 0;
// }






#include<bits/stdc++.h>
#include<filesystem>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
void findAns() {
string a , b ; 
cin>> a >> b ; 
auto res =  filesystem::relative(b ,a) ;
     cout <<"cd "<< res << endl ; 
return ; 
}

int32_t main() {
    fast_io;
     
        findAns();
    
}
