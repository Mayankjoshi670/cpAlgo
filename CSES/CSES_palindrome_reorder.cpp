#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 

void findAns() {
    string s; 
    cin >> s; 
    vi arr(26, 0); 
    for (auto it : s) arr[it - 'A']++; 

    int oddCnt = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 == 1) oddCnt++; 
    }

    if (oddCnt > 1) {
        cout << "NO SOLUTION" << '\n';
        return;  
    }

    int oddIdx = -1;
    string firstHalf;  
    for (int i = 0; i < 26; i++) {
       for (int j = 0; j < arr[i] / 2; j++) {
           firstHalf.push_back(i + 'A'); 
       }
       if (arr[i] % 2 == 1) {
           oddIdx = i; 
       }
    }

    string secondHalf = firstHalf; 
    reverse(begin(secondHalf), end(secondHalf)); 

    if (oddIdx == -1) {
        firstHalf += secondHalf; 
    } else {
        firstHalf += (oddIdx + 'A'); 
        firstHalf += secondHalf; 
    }

    cout << firstHalf << '\n'; 
}

int32_t main() {
    fast_io;
    // int t;
    // cin >> t;
    // while (t-- > 0) {
        findAns();
    // }
}
