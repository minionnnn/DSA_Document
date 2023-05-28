#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    getline (cin , s);
    int so = 0;
    int chu = 0;
    int kytu = 0;
    for (char x : s){
        if (isdigit(x)){
            so++;
        }
        else if (isalpha(x)){
            chu++;
        }
        else kytu++;
    }
    cout << chu << ' ' << so << ' ' << kytu << endl;
}