#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s, s2;
    cin >> s >> s2;

    int i, j;
    for(i = 0, j = 0; i < s.size() && j < s2.size(); i++){
        if(s[i] == s2[j]){
            j++;
        }
    }

    if(j == s2.size()) cout << "sub sequence exists\n";
    else cout << "no sub sequence exists\n";

    return 0;
}
