#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

int main(){
    string s; cin >> s;
    ll res = 0;
    for (int i = 0; i < s.length(); i++){
        res = res * 10 + (s[i] - '0');
        res %= 4;
    }
    if (res == 0){
        cout << 6;
    }
    else if (res == 1){
        cout << 8;
    }
    else if (res == 2){
        cout << 4;
    }
    else if (res == 3){
        cout << 2;
    }
}   