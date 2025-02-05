// #include<bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define ll long long 
// #define int long long int 
 

// void findAns() {
//     int n, x;
//     cin >> n >> x;
//     vi a(n);
//     vi b = a ; 
//     for (auto &it : a) cin >> it;
//     bool flag = true  ; 
//     int ans = 1;
//     int cnt = 1;

//     for (int i = 1; i < n; i++) {   
//          if (a[i] >= a[i - 1]) {
//             cnt++;
//         } else {
//             cnt = 1;
//         }
//         ans = max(ans,cnt);
//     }

//      for (int i = 0; i < n; i++) {
//         vi temp = a;
//         temp[i] *= x; 
//         cnt = 1;

//         for (int j = 1; j < n; j++) {
//             if (temp[j] >=temp[j - 1]) {
//                 cnt++;
//             } 
//             else {
//                 cnt = 1;
//             }
//             ans = max(ans, cnt);
//         }
//     }

//     cout << ans << '\n';
// }

// int32_t main() {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         findAns();
//     }
// }





#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int t; 
    cin >> t; 
 
    while(t--) { 
        string source, target; 
        cin >> source >> target; 
 
        int n = source.length(); 
        int m = target.length(); 
 
        int idxSource = 0; 
        int idxTarget = 0; 
 
        while(idxSource < n && idxTarget < m) { 
            if(source[idxSource] == target[idxTarget]){ 
                idxTarget++; 
            } 
            idxSource++; 
        } 
 
        if(idxTarget != m) { 
            cout << -1 << endl; 
            continue; 
        } 
 
        long long totalCost = 0; 
        int currentIdx = n; 
 
        for(int i = m - 1; i >= 0; i--){ 
            while(currentIdx >= 1 && source[currentIdx - 1] != target[i]) { 
                currentIdx--; 
            } 
            totalCost += currentIdx; 
            currentIdx--; 
        } 
 
        long long baseCost = (long long)m * n + lenSource - m - ((long long)m * (m - 1)) / 2; 
 
        cout << baseCost - totalCost << endl; 
    } 
 
    return 0; 
}