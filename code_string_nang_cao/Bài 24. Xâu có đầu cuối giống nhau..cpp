#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    map <char , int> mp;
    for (char &x : s){
        mp[x]++;
    }
    ll dem = 0;
    for (auto x : mp){
        if (x.second == 1){
            dem++;
        }
        else dem += 1ll * x.second + 1ll * x.second * (x.second - 1) / 2ll;
    }
    cout << dem << endl;
}