#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    if (s == tmp){
        return true;
    }
    return false;
}

bool cmp (string s, string t){
        return s.size() < t.size();
}

int main(){
    string tmp;
    set <string> s;
    vector <string> v;
    while (cin >> tmp){
        if (check(tmp)){
            if (s.count(tmp) == 0){
                s.insert(tmp);
                v.push_back(tmp);
            }
        }
    }
    stable_sort (v.begin(), v.end(), cmp);
    for (string x : v){
        cout << x << ' ';
    }
}