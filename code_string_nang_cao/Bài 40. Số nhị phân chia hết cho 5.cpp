#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k = s.length();
    long long lt = 1; long long dec = 0;
    for (int i = k - 1; i >= 0; i--){
        dec += (s[i] - '0') * 1ll * lt;
        dec %= 5;
        lt *= 2;
        lt %= 5;
    }
    if (dec == 0){
        cout << "YES\n";
    }
    else cout << "NO\n";
}