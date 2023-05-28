#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    ll sum = 0;
    for (char x : s){
        sum += 1ll * (x - '0');
    }
    cout << sum << endl;
}