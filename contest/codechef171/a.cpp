#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

int mini(char s, char t) {
    int diff = t - s;
    if (diff < 0) {
        diff += 26;  
    }
    return diff;
}

void findAns() {
    string str;
    cin >> str;
    string target = "ADVITIYA";
    int total  = 0;
    
     for (int i = 0; i < 8; i++) {
        total  += mini(str[i], target[i]);
    }
    
    cout << total  << endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        findAns();
    }
}
