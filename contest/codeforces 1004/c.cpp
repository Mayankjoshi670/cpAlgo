#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long int

vector<int> arr = {9, 99, 999, 9999, 99999, 999999, 99999999, 999999999};
unordered_map<int, int> dp;  // Memoization

// Function to check if a number contains digit 7
bool containsSeven(int num) {
    while (num > 0) {
        if (num % 10 == 7) return true;
        num /= 10;
    }
    return false;
}

// DP function
int calculate(int no) {
    if (containsSeven(no)) return 0; // Already contains 7
    if (dp.count(no)) return dp[no]; // Memoized result

    int ans = LLONG_MAX;
    for (int x : arr) {
        if (no + x <= 1e9) {
            ans = min(ans, 1 + calculate(no + x));
        }
    }
    
    return dp[no] = ans;
}

void findAns() {
    int n;
    cin >> n;
    cout << calculate(n) << "\n";
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t-- > 0) {
        findAns();
    }
    return 0;
}
