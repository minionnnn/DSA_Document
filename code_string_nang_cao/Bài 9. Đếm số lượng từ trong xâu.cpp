#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    getline (cin, s);
    for (char &x : s){
        if (!isdigit(x) && !isalpha(x)){
            x = ' ';
        }
    }
    stringstream ss (s);
    string w;
    int dem = 0;
    while (ss >> w){
        dem++;
    }
    cout << dem << endl;
}