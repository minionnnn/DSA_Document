#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(string s1, string s2){
    string s = s1 + s2;
    string t = s2 + s1;
    return s > t;
}

int main(){
    string s; cin >> s;
    for (char &x : s){
        if (!isdigit(x)){
            x = ' ';
        }
    }
    stringstream ss (s);
    string w;
    vector <string> v;

    while (ss >> w){
        while (w[0] == '0' && w.size() > 1){
            w.erase(0, 1);
        }
        v.push_back(w);
    }
    sort (v.begin(), v.end(), cmp);
    for (string x : v){
        cout << x;
    }
}