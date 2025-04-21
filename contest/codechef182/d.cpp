#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// Check if the string is valid (no K or more consecutive characters)
bool isValid(const string& s, int k) {
    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= k) return false;
        } else {
            count = 1;
        }
    }
    return true;
}

// Find all substrings where K or more consecutive same characters occur
vector<pair<int, int>> findProblematicRuns(const string& s, int k) {
    vector<pair<int, int>> runs;
    int count = 1, start = 0;
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count == k) {
                runs.push_back({start, i});
            }
        } else {
            count = 1;
            start = i;
        }
    }
    
    return runs;
}

bool solve(const string& s, int k) {
    int n = s.length();
    
    if (isValid(s, k)) return true;

    auto runs = findProblematicRuns(s, k);

    for (const auto& run : runs) {
        int start = run.first;
        int end = run.second;

        // Pattern 1: Reverse a range around the problematic run
        for (int left = max(0, start - k + 1); left <= start; left++) {
            for (int right = end; right < min(n, end + k); right++) {
                if (right + 1 <= n) {
                    string modified = s;
                    reverse(modified.begin() + left, modified.begin() + right + 1);
                    if (isValid(modified, k)) return true;
                }
            }
        }

        // Pattern 2: Use nearby different characters to break the run
        for (int i = max(0, start - 1); i >= max(0, start - k); i--) {
            if (s[i] != s[start]) {
                for (int j = end; j < min(n, end + k); j++) {
                    if (j + 1 <= n) {
                        string modified = s;
                        reverse(modified.begin() + i, modified.begin() + j + 1);
                        if (isValid(modified, k)) return true;
                    }
                }
                break;
            }
        }

        for (int j = min(n - 1, end + 1); j < min(n, end + k); j++) {
            if (s[j] != s[end]) {
                for (int i = max(0, start - k + 1); i <= start; i++) {
                    if (j + 1 <= n) {
                        string modified = s;
                        reverse(modified.begin() + i, modified.begin() + j + 1);
                        if (isValid(modified, k)) return true;
                    }
                }
                break;
            }
        }
    }

    // Try strategic reversals in general
    for (int i = 0; i < n; i++) {
        for (int len = k; len <= min(2 * k, n - i); len++) {
            if (i + len <= n) {
                string modified = s;
                reverse(modified.begin() + i, modified.begin() + i + len);
                if (isValid(modified, k)) return true;
            }
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        cout << (solve(s, k) ? "YES\n" : "NO\n");
    }

    return 0;
}
