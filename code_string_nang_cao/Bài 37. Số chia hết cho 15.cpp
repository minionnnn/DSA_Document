#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    int k = s.size();
    bool ok1 = true;
    bool ok2 = true;
    if (s[k - 1] != '0' && s[k - 1] != '5'){
        return false;
    }
    int tong = 0;
    for (char x : s){
        tong += x - '0';
    }
    if (tong % 3 == 0){
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