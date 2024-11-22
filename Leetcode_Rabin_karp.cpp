#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int

bool rabinKarp(string & s , int mid , string & temp){
    int n = s.size(); 
    int base = 31, mod = 1e9+31; 
    int hash = 0, power = 1; 

    for(int i = 0; i < mid; i++) {
        hash = (hash * base + (s[i] - 'a' + 1)) % mod; 
        if(i < mid - 1) {
            power = (power * base) % mod; 
        }
    }

    map<int, vector<int>> mpp; 
    mpp[hash].push_back(0);  

    for(int i = mid; i < n; i++) {
        hash = (hash - (s[i - mid] - 'a' + 1) * power % mod + mod) % mod; 
        hash = (hash * base + (s[i] - 'a' + 1)) % mod;

        if(mpp.find(hash) != mpp.end()) {
            for(auto it : mpp[hash]) {
                if(s.substr(it, mid) == s.substr(i - mid + 1, mid)) {
                    temp = s.substr(it, mid); 
                    return true; 
                }
            }
        }
        mpp[hash].push_back(i - mid + 1);  
    }
    return false;  
} 

void findAns() {
    string s; 
    cin >> s; 
    int low = 0; 
    int high = s.size(); 
    string result = ""; 
    string temp; 

    while(low <= high) {
        int mid = (low + high) >> 1; 
        if(rabinKarp(s, mid, temp)) {
            if(temp.size() > result.size()) {
                result = temp; 
            }
            low = mid + 1;  
        }
        else {
            high = mid - 1;  
        }
    }    

    cout << result;  
}

int32_t main() {
    fast_io;
    findAns();
    return 0;
}
