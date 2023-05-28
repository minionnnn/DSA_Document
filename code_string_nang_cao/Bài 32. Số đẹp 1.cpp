#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool nt (int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    int tong = 0;
    bool ok1 = true;
    bool ok2 = true;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7'){
            ok1 = false;
        }
        tong += s[i] - '0';
    }
    if (ok1 && nt(tong)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}