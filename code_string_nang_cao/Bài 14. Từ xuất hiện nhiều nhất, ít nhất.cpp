#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; 
    map <string, int> mp;
    string m, n;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    while (cin >> s){
        mp[s]++;
    }
    for (auto x : mp){
        if (max_val <= x.second){
            max_val = x.second;
            m = x.first;
        }
        if (min_val >= x.second){
            n = x.first;
            min_val = x.second;
        }
    }
    cout << m << ' ' << max_val << endl << n << ' ' << min_val << endl;
}