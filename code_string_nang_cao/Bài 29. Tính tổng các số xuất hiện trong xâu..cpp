#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp (string s, string t){
    if (s.length() != t.length()){
        return s.length() > t.length();
    }
    return s > t;
}

int main(){
    string s; cin >> s;
    for (char &x : s){
        if (!isdigit(x)){
            x = ' ';
        }
    }
    ll sum = 0;
    stringstream ss (s);
    string w;
    while (ss >> w){
        ll k = stoll(w);
        sum += k;
    }
    cout << sum << endl;
}
