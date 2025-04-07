#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define vpi vector<pair<int, int>> 

vpi primeFactors(int n) {
    vpi result;
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0)
        result.push_back({2, count});
    for (int i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0)
            result.push_back({i, count});
    }
    if (n > 2)
        result.push_back({n, 1});
    return result;
}

void findAns() {
    int n; 
    cin >> n; 
    vpi result = primeFactors(n); 
    if (result.size() >= 3) {
        int a = pow(result[0].first, result[0].second);  
        int b = pow(result[1].first, result[1].second);  
        cout << "YES" << '\n'; 
        cout << a << " " << b << " " << n / (a * b) << '\n'; 
        return; 
    } else if (result.size() == 2) {
        if (result[0].second == 1 && result[1].second == 1) {
            cout << "NO" << '\n'; 
            return; 
        } else if ((result[0].second <=2 && result[1].second == 1) || (result[0].second == 1 && result[1].second <=2 )) {
            cout << "NO" << '\n'; 
            return; 
        } else {
            int a = result[0].first;
            int b = result[1].first;
            int a_pow = 1;
            int b_pow = 1;
            for (int i = 1; i < result[0].second; i++) a_pow *= a;
            for (int i = 1; i < result[1].second; i++) b_pow *= b;
            int third = a_pow * b_pow;
            if (a != b && a != third && b != third && a > 1 && b > 1 && third > 1) {
                cout << "YES" << '\n';
                cout << a << " " << b << " " << third << '\n';
                return;
            } else {
                cout << "NO" << '\n';
                return;
            }
        }
    } else {
        if (result[0].second < 6) {
            cout << "NO" << '\n'; 
            return; 
        } else {
            cout << "YES" << '\n'; 
            cout << pow(result[0].first, 1) << " " << pow(result[0].first, 2) << " " << pow(result[0].first, result[0].second - 3) << '\n';
            return;  
        }
    }
}

int32_t main() {
    fast_io;
    int t = 1; 
    cin >> t; 
    while (t-- > 0) {
        findAns();
    }
}
