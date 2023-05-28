#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s, t;
    getline (cin, s);
    getline (cin, t);
    stringstream ss (s);
    string w;
    s = "";
    while (ss >> w){
        for (char &x : w){
            x = tolower(x);
        }
        w[0] = toupper(w[0]);
        s += w + ' ';
    }
    cout << s << endl;
    if (t[1] == '/'){
        t = '0' + t;
    }
    if (t[4] == '/'){
        t.insert(t.begin() + 3, '0');
    }
    cout << t << endl;
}