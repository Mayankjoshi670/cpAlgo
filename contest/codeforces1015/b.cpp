#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int gcd(int a, int b) {
    return __gcd(a, b);
}

void findAns() {
    int n;
    cin >> n;
    vector<int> input(n);
    for(int &x : input) cin >> x;

    int mini = *min_element(begin(input), end(input));
    int count_mini = count(begin(input), end(input), mini);

    if(count_mini > 1) {
        cout << "Yes\n";
        return;
    }

    vector<int> possi;
    for(int x : input) {
        if(x != mini && x % mini == 0) {
            possi.push_back(x);
        }
    }

    if(possi.empty()) {
        cout << "No\n";
        return;
    }

    int gc = possi[0];
    for(int i = 1; i < possi.size(); i++) {
        gc= gcd(gc, possi[i]);
    }

    if(gc == mini) cout << "Yes\n";
    else cout << "No\n";
}

int32_t main() {
    fast_io;
    int t = 1 ; 
    cin >> t ; 
    while(t-- > 0){
        findAns();
    }     
}
