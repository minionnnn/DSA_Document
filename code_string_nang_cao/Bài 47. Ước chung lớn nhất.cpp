#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

int main(){
    ll a, x, y; cin >> a >> x >> y;
    int g = __gcd(x, y);
    for (int i = 0; i < g; i++){
        cout << a;
    }
}   