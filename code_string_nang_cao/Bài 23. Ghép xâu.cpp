#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(string s, string t){
    string a = s + t;
    string b = t + s;
    return a > b;
}

int main(){
    int n; cin >> n;
    vector <string> v(n);
    for (string &x : v) cin >> x;
    sort(v.begin(), v.end(), cmp);
    for (string x : v){
        cout << x;
    }
}