#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    bool ok1 = true;
    bool ok2 = true;
    if ((s[s.size() - 1] - '0') % 2 != 0) ok1 = false;
    int tong = 0;
    for (char x : s){
        tong += x - '0';
    }
    if (tong % 3 != 0){
        ok2 = false;
    }
    if (ok1 && ok2){
        return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    if (check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}