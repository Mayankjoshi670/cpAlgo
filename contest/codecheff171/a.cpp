#include <bits/stdc++.h>
using namespace std;

void findAns(){
    int a , b ; 
    cin>>a>> b ; 
    int halfa = a/2 ; 
    int halfb = b/2 ;
    for(int i = 0 ; i<halfa ; i++ ){
        cout << 1; 
    }
        for(int i = 0 ; i<halfb ; i++ ){
        cout << 2; 
    }
        for(int i = 0 ; i<halfb ; i++ ){
        cout << 2; 
    }
        for(int i = 0 ; i<halfa ; i++ ){
        cout << 1; 
    }
    cout << endl ; 
    
}
int main() {
    int t ; 
    cin>> t ; 
    while(t-->0){
        findAns() ; 
    }

}

#include <bits/stdc++.h>
using namespace std;
 
//////////////////////////// basic template /////////////////////////////////////////////////////////////
 
// template<typename A, typename B>
// ostream& operator<<(ostream &os, const pair<A, B> &p) {
//     return os << '(' << p.first << ", " << p.second << ')';
// }
 
// template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
// ostream& operator<<(ostream &os, const T_container &v) {
//     os << '{';
//     string sep;
//     for (const T &x : v)
//         os << sep << x, sep = ", ";
//     return os << '}';
// }
 
//////////////////////////// basic macros ///////////////////////////////////////////////////////////////
 
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define nl "\n" 
#define pi pair<int, int>
#define pl pair<long long, long long>
#define sz(x) ((int)x.size())         // sz(vector) will give vector size
#define all(a) (a).begin(), (a).end() // for sorting use sort(all(myVector));
#define floop(i, start, end) for (int i = start; i < end; ++i)
#define fnloop(i, start, end) for (int i = start; i >= end; --i)

void solve() {
    int n, x;
    cin >> n >> x;
    
    vi arr(n);
    for (auto &c : arr) cin >> c;

    int mx = 1;

    int ax = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            ax++;
        } else {
            ax = 1;
        }
        mx = max(mx, ax);
    }

    for (int i = 0; i < n; i++) {
        vi brr = arr;
        brr[i] *= x; 
        ax = 1;

        for (int j = 1; j < n; j++) {
            if (brr[j] >= brr[j - 1]) {
                ax++;
            } 
            else {
                ax = 1;
            }
            mx = max(mx, ax);
        }
    }

    cout << mx << nl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    t--;
    while (t--)
    {
        solve();
    }
    solve();
    return 0;
}