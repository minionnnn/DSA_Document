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
    string r = "";
    r.push_back(s[0]);
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i - 1]){
            r.push_back(s[i]);
        }
        else {
            r.push_back(' ');
            r.push_back(s[i]);
        }
    }
    stringstream ss (r);
    vector <string> v;
    while (ss >> s){
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v.front();
}
