#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){    
    int n; cin >> n;
    cin.ignore(1);
    while (n--){
        string s;
        getline (cin , s);
        vector <string> v;
        string w;
        string emailr = "";
        for (char &x : s){
            x = tolower(x);
        }
        stringstream ss(s);
        while (ss >> w){
            v.push_back(w);
        }
        string tmp = *v.rbegin();
        v.erase(v.begin() + v.size() - 1);
        emailr += *(v.rbegin());
        for (int i = 0; i < v.size() - 1; i++){
            emailr += (v[i][0]);
        }
        emailr += "@xyz.edu.vn";
        cout << r << endl;
        stringstream tt (tmp);
        while (getline (tt, w, '/')){
            cout << stoi(w);
        }
        cout << endl;
    }
}