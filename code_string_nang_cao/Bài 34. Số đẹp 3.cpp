#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    if (s.size() == 1)
        return true;
    int m = s[0];
    bool ok1 = true;
    bool ok2 = true;
    for (int i = 1; i < s.size(); i++){
        if (s[i] > s[i - 1]){
            ok1 = false;
        }
    }
    for (int i = 1; i < s.size(); i++){
        if (s[i] < s[i - 1]){
            ok2 = false;
        }
    }
    if (ok1 || ok2){
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