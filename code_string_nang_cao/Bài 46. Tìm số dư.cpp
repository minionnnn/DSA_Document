#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

int main(){
    string s; cin >> s;
    ll ans = 1;
    ll du2 = 0;
    ll du4 = 0;
    for (int i = 0; i < s.length(); i++){
        du2 = du2 * 10ll + 1ll * (s[i] - '0');
        du4 = du4 * 10ll + 1ll * (s[i] - '0');
        du2 %= 4;
        du4 %= 2;
    }
    if (du2 == 1){
        ans += 2;
        ans += 3;
    } 
    else if (du2 == 2){
        ans += 4;
        ans += 4;
    }
    else if (du2 == 3){
        ans += 3;
        ans += 2;
    }
    else if (du2 == 0){
        ans += 1;
        ans += 1;
    }
    if (du4 == 1){
        ans += 4;
    }
    else if (du4 == 0){
        ans += 1;
    }
    cout << ans % 5 << endl;
}   