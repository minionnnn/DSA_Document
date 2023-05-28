#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    int k = s.size();
    if (k == 1){
        if (s[k - 1] == '0' || s[k - 1] == '4' || s[k - 1] == '8'){
            return true;
        }
        return false;
    }
    int a2 = s[k - 1] - '0' + 10 * (s[k - 2] - '0');
    if (a2 % 4 == 0){
        return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    if (check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}