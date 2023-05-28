#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    getline (cin , s);
    int cnt[256] = {0};
    for (char x : s){
        cnt[x]++;
    }
    for (int i = 0; i < 256; i++){
        if (cnt[i]){
            cout << char(i) << ' ' << cnt[i] << endl;
        }
    }
    cout << endl;
    for (char x : s){
        if (cnt[x]){
            cout << x << ' ' << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
}