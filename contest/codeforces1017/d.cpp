#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpci vector<pair<char, int>>
vpci solve( const string &str){
  vpci  res;
    int n = str.size();
    for (int i = 0; i < n;) {
        char ch = str[i];
        int count = 0;
        while (i < n && str[i] == ch) {
            count++;
            i++;
        }
        res.push_back({ch, count});
    }
    return res;

}
void findAns() {
  string given , target ; 
  cin>> given >> target ; 
   vpci a =   solve(given) ; 
   vpci b = solve(target) ; 
   if(a.size() != b.size()){
    cout << "NO\n" ; 
    return ; 
}
for(int i = 0 ; i< a.size() ; i++){
    if(a[i].first != b[i].first){
        cout << "NO\n" ; 
        return ;
    }
    int x = a[i].second ; 
    int y = b[i].second ; 
    if(y < x || y >2*x){
        cout << "NO\n" ; 
        return ; 
    }
}
cout << "YES\n" ; 

}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin>> t ; 
    while(t-->0){
        findAns();
    }     
    
}
 
