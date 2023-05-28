#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int tong = 0;
    int k = s.length();
    if (k == 1){
        if (s == "0"){
            cout << "YES\n";
        }
        else cout << "NO";
    }
    else {
        tong += (s[k - 2] - '0') * 10 + (s[k - 1] - '0');
        if (tong % 25  == 0){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}