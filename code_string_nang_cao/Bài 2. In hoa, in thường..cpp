#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    getline (cin , s);
    for (char &x : s){
        x = toupper(x);
    }
    for (char x : s){
        cout << x;
    }
    cout << endl;
    for (char &x : s){
        x = tolower(x);
    }
    for (char x : s){
        cout << x;
    }
}