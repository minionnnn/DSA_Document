#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string tmp;
    vector <string> v;
    while (cin >> tmp){
        for (char &x : tmp){
            x = tolower(x);
        }
        tmp[0] = toupper(tmp[0]);
        v.push_back(tmp);
    }
    for (char &x : v[v.size() - 1]){
        x = toupper(x);
    }
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 2){
            cout << v[i] << ", ";
        }
        else cout << v[i] << ' ';
    }
    cout << endl;
    cout << v[v.size() - 1] << ", ";
    for (int i = 0; i < v.size() - 1; i++){
        cout << v[i] << ' ';
    }
}