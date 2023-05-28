#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s, t;
    getline (cin, s);
    getline (cin, t);
    set <char> se;
    map <char, int> mp1, mp2;
    for (char x : s){
        se.insert(x);
        mp1[x] = 1;
    }
    for (char x : t){
        se.insert(x);
        mp2[x] = 1;
    }
    for (auto x : mp1){
        if (mp2[x.first]){
            cout << x.first;
        }
    }
    cout << endl;
    for (char x : se){
        cout << x;
    }
}