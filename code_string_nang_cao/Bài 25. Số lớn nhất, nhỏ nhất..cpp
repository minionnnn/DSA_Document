#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int m, s; cin >> m >> s;
    if (9 * m < s || (s == 0 && m > 1)){
        cout << "NOT FOUND\n";
        return 0;
    }
    int t = s;
    int be[m], lon[m];
    for (int i = 0; i < m; i++){
        if (s >= 9){
            lon[i] = 9;
            s -= 9;
        }
        else {
            lon[i] = s;
            s = 0;
        }
    }
    t--;
    for (int i = m - 1; i >= 1; i--){
        if (t >= 9){
            be[i] = 9;
            t -= 9;
        }
        else {
            be[i] = t;
            t = 0;
        }
    }
    be[0] = t + 1;
    for (int x : be){
        cout << x;
    }
    cout << endl;
    for (int x : lon){
        cout << x;
    }
}
