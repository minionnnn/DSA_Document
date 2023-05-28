#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    bool c6 = 0;
    for (char x : s){
        if (x == '6'){
            c6 = 1;
        }
    }
    string tmp = s;
    reverse(s.begin(), s.end());
    if (s == tmp && c6){
        cout << "YES\n";
    }
    else cout << "NO\n";
}