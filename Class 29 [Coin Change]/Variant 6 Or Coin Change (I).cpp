#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define mod 100000007
using namespace std;

int n, k;
int coins[55], countt[55], limit[55], dp[55][1003];

/**

fun(level, rem) = number of ways

From 'level' to 'MAX_LEVEL/number_of_coins' number of
ways to make  change with coins of value 'rem'

*/

int fun(int level, int rem) /// (0, 5)
{
//    cout << level << " " << rem << nl;

    if(level == n) return (rem == 0);
    if(dp[level][rem] != -1) return dp[level][rem];

    int ans = 0;
//    cout << coins[level] << " " << countt[level] << nl;
    for(int freq = 0; freq <= countt[level] && freq*coins[level] <= rem; freq++){
        ans = (ans + fun(level + 1, rem - freq*coins[level])) %mod;
    }

    return dp[level][rem] = ans;
}

int main()
{
    int t, cas = 1;
    cin >> t;

    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> coins[i];
        for(int i = 0; i < n; i++)
            cin >> countt[i];

        memset(dp, -1, sizeof dp);
        cout << "Case " << cas++ << ": " << fun(0, k) << nl;
    }

    return 0;
}
