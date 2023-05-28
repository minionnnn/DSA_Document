#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s, int k){
    reverse(s.begin(), s.end());
    for (int i = 0; i < k; i++){
        if (s[i] != '0'){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    int k; cin >> s >> k;
    if (check(s, k)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}