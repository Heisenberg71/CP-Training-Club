#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    map<string, bool> mp;
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){ /// O(n)
        string str;
        cin >> str; /// O(n)
        if(mp[str] == 1){ /// O(nlog(n))
            cout << "YES" << nl;
        }
        else{
            cout << "NO" << nl;
            mp[str] = 1; /// O(nlog(n))
        }
    }

    return 0;
}
