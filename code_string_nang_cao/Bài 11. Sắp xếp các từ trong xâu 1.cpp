#include <bits/stdc++.h>

using namespace std;

bool cmp(string s1, string s2){
    if (s1.size() != s2.size()){
        return s1.size() < s2.size();
    }
    else return s1 < s2;
}

int main(){
    string s;
    vector <string> v;
    while (cin >> s){
        v.push_back(s); 
    }
    sort (v.begin(), v.end());
    for (string x : v){
        cout << x << ' ';
    }
    cout << endl;
    sort (v.begin(), v.end(), cmp);
    for (string x : v){
        cout << x << " ";
    }
}
