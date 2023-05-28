#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

bool may_man (string s){
    while (s.length() != 1){
        int tong = 0;
        for (char x : s){
            tong += x - '0';
        }
        s = to_string(tong);
    }
    if (s[0] == '9'){
        return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    if (may_man (s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}   