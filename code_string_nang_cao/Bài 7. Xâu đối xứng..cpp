#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    int l = 0;
    int r = s.size() - 1;
    while (l <= r){
        if (s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if (check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
    
}