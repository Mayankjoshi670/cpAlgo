// #include <bits/stdc++.h>
// using namespace std;
// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
// #define int long long int

// void findAns() {
//     int n;
//     cin >> n; 
//     vector<tuple<char ,int , char , int>>input ; 
//     int maxL = LLONG_MIN, maxR = LLONG_MAX;

//     for (int i = 0; i < n; i++) {
//        int a , b ;  
//        char c , d ; 
//        cin>>c >> a >> d >> b  ; 
//        maxL = max(maxL , a) ; 
//        maxR = max(maxR , b) ; 
//        input.push_back({c ,a , d ,b })  ; 
//     }
//     vector<vector<int>>cache(maxL  +1 , vector<int> (maxR+1 , LLONG_MAX))  ; 
//     cache[0][0]  = 0 ; 
    


//  }

// int32_t main() {
//     fast_io;
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         findAns();
//     }
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxPeople(int n, vector<pair<char, int>>& leftGates, vector<pair<char, int>>& rightGates) {
        vector<long long> dp = {1, 1}; // Initial state: 1 person in each lane
        
        for (int i = 0; i < n; ++i) {
            long long leftExtra = 0, rightExtra = 0;
            
            // Process left gate
            if (leftGates[i].first == '+') {
                leftExtra += leftGates[i].second;
            } else { // 'x'
                leftExtra += (dp[0] * (leftGates[i].second - 1));
            }
            
            // Process right gate
            if (rightGates[i].first == '+') {
                rightExtra += rightGates[i].second;
            } else { // 'x'
                rightExtra += (dp[1] * (rightGates[i].second - 1));
            }
            
            // Allocate extra people optimally
            long long totalExtra = leftExtra + rightExtra;
            if (dp[0] >= dp[1]) {
                dp[0] += totalExtra;
            } else {
                dp[1] += totalExtra;
            }
        }
        
        return dp[0] + dp[1];
    }
};

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<char, int>> leftGates(n);
        vector<pair<char, int>> rightGates(n);
        
        for (int i = 0; i < n; ++i) {
            char leftOp, rightOp;
            int leftVal, rightVal;
            cin >> leftOp >> leftVal >> rightOp >> rightVal;
            leftGates[i] = {leftOp, leftVal};
            rightGates[i] = {rightOp, rightVal};
        }
        
        Solution sol;
        cout << sol.maxPeople(n, leftGates, rightGates) << endl;
    }
    
    return 0;
}