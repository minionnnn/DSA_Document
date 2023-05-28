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
    vector <string> v;
    stringstream ss (s);
    string w;
    while (ss >> w){
        while (w[0] == '0' && w.size() > 1){
            w.erase(0, 1);
        }
        v.push_back(w);
    }
    sort (v.begin(), v.end(), cmp);
    cout << v.front();
}
