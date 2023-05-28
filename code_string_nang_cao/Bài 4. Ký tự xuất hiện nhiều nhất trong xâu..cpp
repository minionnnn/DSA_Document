#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    int cnt[256] = {0};
    for (char x : s){
        cnt[x]++;
    }
    int min = INT_MAX;
    int max = INT_MIN;
    char ktmin, ktmax;
    for (int i = 0; i < 256; i++){
        if (max <= cnt[i]){
            max = cnt[i];
            ktmax = char (i);
        }
        if (min >= cnt[i] && cnt[i] != 0){
            min = cnt[i];
            ktmin = char (i);
        }
    }
    cout << ktmax << ' ' << max << endl;
    cout << ktmin << ' ' << min << endl;
}