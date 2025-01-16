#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define int long long int

void findAns() {
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
 
    vector<int> freq(21, 0);
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
 
    int maxFreq = 0, maxVal = -1;
    for (int i = 1; i <= 20; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxVal = i;
        }
    }

    if (maxVal == k) {
        cout << 0 << "\n";
        return;
    }
    int currentFreq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            currentFreq++;
        } else {
            freq[arr[i]]--;
        }

         if (currentFreq > maxFreq) {
            cout << 1 << "\n";
            return;
        }
    }

     currentFreq = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == k) {
            currentFreq++;
        } else {
            freq[arr[i]]--;
        }
 
         if (currentFreq > maxFreq) {
            cout << 1 << "\n";
            return;
        }
    }
   cout << 2 << "\n";
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
