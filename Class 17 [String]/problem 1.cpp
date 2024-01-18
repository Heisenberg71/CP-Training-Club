#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
    string s, s2;
    cin >> s >> s2;

    bool matched;
    for(int L = 0, R = s2.size() - 1; R < s.size(); L++, R++){
        matched = true;
        for(int i = 0; i < s2.size(); i++){
            if(s[L + i] != s2[i]){
                matched = false;
                break;
            }
        }
        if(matched == true){
            break;
        }
    }

    if(matched) cout << "sub-string exists" << nl;
    else cout << "sub-string not exists" << nl;

    return 0;
}
