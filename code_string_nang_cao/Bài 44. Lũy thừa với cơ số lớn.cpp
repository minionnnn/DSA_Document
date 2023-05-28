#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

ll powMod (ll du, ll m){
    ll res = 1;
    while (m){
        if (m % 2 == 1){
            res *= du;
            res %= mod;
        }
        du *= du;
        du %= mod;
        m /= 2;
    }
    return res;
}

int main(){
    string s;
    ll m; cin >> s >> m;
    ll du = 0;
    for (int i = 0; i < s.length(); i++){
        du = du * 10ll + 1ll * (s[i] - '0');
        du %= mod;
    }
    cout << powMod(du, m);
}   