#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    map <string, int> mp;
    vector <string> v;
    while (cin >> s){
        mp[s]++;
        v.push_back(s);
    }
    for (auto x : mp){
        if (x.second){
            cout << x.first << ' ' << x.second << endl;
        }
    }
    cout << endl;
    for (string x : v){
        if (mp[x]){
            cout << x << ' ' << mp[x] << endl;
            mp[x] = 0;
        }
    }
}