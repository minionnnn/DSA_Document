#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s, t;
    getline (cin, s);
    getline (cin, t);
    for (char &x : s){
        x = tolower(x);
    }
    for (char &x : t){
        x = tolower(x);
    }
    map <string, int> mp1, mp2;
    stringstream ss (s);
    stringstream tt (t);
    string w;
    while (ss >> w){
        mp1[w] = 1;
    }
    while (tt >> w){
        mp2[w] = 1;
    }
    for (pair<string, int> x : mp1){
        if (mp2[x.first] == 0){
            cout << x.first << ' ';
        }
    }
}