#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s)
{
    string tmp = "python";
    int dem = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == tmp[dem]){
            dem++;
        }
    }
    if (dem == 6){
        return true;
    }
    return false;
}
int main(){    
    string s;
    getline (cin, s);
    if (check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}