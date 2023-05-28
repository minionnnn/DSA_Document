#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    ll tc = 0; ll tl = 0;
    for (int i = 0; i < s.length(); i++){
        if (i % 2 == 0){
            tc += 1ll * (s[i] - '0');
        }
        else tl += 1ll * (s[i] - '0');
    }
    if (abs(tc - tl) % 11 == 0){
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