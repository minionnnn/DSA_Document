#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string tmp;
    set <string> s;
    vector <string> v;
    while (cin >> tmp){
        if (s.count(tmp) == 0){
            s.insert(tmp);
            v.push_back(tmp);
        }
    }
    for (string x : s){
        cout << x << ' ';
    }
    cout << endl;
    for (string x : v){
        cout << x << ' ';
    }
}