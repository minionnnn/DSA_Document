#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; ll m;
    cin >> s >> m;
    ll r = 0;
    for (int i = 0; i < s.length(); i++){
        r = r * 10ll + 1ll * (s[i] - '0');
        r = r % m;
    } 
    cout << __gcd(m, r);
}