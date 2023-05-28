#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){    
    int n; cin >> n;
    cin.ignore();
    map <string, int> mp;
    while (n--){
        string xau;
        getline (cin, xau);
        vector <string> v;
        for (char &x : xau){
            x = tolower(x);
        }
        stringstream ss (xau);
        string w;
        while (ss >> w){
            v.push_back(w);
        }
        string email = "";
        string so = v[v.size() - 1];
        v.erase(v.begin() + v.size() - 1);
        email += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++){
            email += v[i][0];
        }
        mp[email]++;
        if (mp[email] == 1){
            cout << email;
        }
        else {
            cout << email << mp[email];
        }
        cout << "@xyz.edu.vn" << endl;
        stringstream tt (so);
        while (getline (tt, w, '/')){
            cout << stoi(w);
        }
        cout << endl;
    }
}