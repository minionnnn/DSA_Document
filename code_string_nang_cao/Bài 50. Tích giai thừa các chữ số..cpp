#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

int main(){
    string s; cin >> s;
    string ans = "";
    for (char x : s){
        if (x == '4'){
            ans += "322";
        }
        else if (x == '6'){
            ans += "35";
        }
        else if (x == '8'){
            ans += "2227";
        }
        else if (x == '9'){
            ans += "3327";
        }
        else if (x != '1' && x != '0'){
            ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    for (char x : ans){
        cout << x;
    }
}   