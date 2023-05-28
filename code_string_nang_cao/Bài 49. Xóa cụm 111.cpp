#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  mod = 1e9 + 7;

int main(){
    string s; cin >> s;
    while (s.find("111") != string::npos){
        int pos = s.find("111");
        s.erase(pos, 3);
    }
    if (s.empty()){
        cout << "EMPTY\n";
    }
    else cout << s << endl;
}   