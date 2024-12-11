#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long 
#define int long long int 
#define umis  unordered_map<int, string>
#define vs vector<string>
#define pb push_back 
vi  get(const umis & validDigits, const string& fd) {
    vi ans;

    for (auto it  : validDigits) {
        int notHit = 0;
        string  pattern = it.second;

        for (int  _ = 0; _ < fd.length(); _++) {
            if (fd[_] != pattern[_]) {
                ++notHit;
            }
        }

        if (notHit <= 1) {
            ans.pb(it.first);
        }
    }

    return ans;
}

void inner(const vvi& possibleNumbers, int index, vi& curcom, vvi& result) {
    if (index == possibleNumbers.size()) {
        result.pb(curcom);
        return;
    }

    for (int digit : possibleNumbers[index]) {
        curcom.pb(digit);
        inner(possibleNumbers, index + 1, curcom, result);
        curcom.pop_back();
    }
}

vvi outer(const vvi& possibleNumbers) {
    vvi result;
    vi curcom;
    inner(possibleNumbers, 0, curcom, result);
    return result;
}

void   findAns() {
    vs segment(3);
    vvi predicted;
    vs display(3);
    umis digp;
    int len = 0 ; 
    int calculatedAns  = 0;
    for (int i = 0; i < 3; ++i) {
        cin >> segment[i];
    }

    for (int i = 0; i < 3; ++i) {
        cin >> display[i];
    }

    for (int _ = 0; _ < 10; _++) {
        string structure;
        for (int j = 0; j < 3; j++) {
            int temp = _*3  ; 
            structure += segment[j].substr(temp, 3);
        }
        digp[_] = structure;
    }

      len  = display[0].length() / 3;
    for (int i = 0; i < len; ++i) {
        string fd;
        for (int _ = 0; _ < 3; _++) {
            int tes = _*3 ; 
            fd += display[_].substr(tes, 3);
        }

        vi matchingDigits = get(digp, fd);

        if (matchingDigits.empty()) {
            cout << "Invalid";
            return;
        }
        predicted.pb(matchingDigits);
    }

    vvi combinations = outer(predicted);
    for ( auto it : combinations) {
        string resTemp;
        for (auto it  : it) {
            resTemp += to_string(it);
        }
        calculatedAns += stoi(resTemp);
        int noNo = calculatedAns ; 
    }

    cout <<  calculatedAns;
}

int32_t main() {
    fast_io;
     findAns();
      
    return 0;
}
