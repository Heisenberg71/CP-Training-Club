#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int n, k;
int coins[102], dp[102][102];

/**

fun(level, rem) = number of ways

From 'level' to 'MAX_LEVEL/number_of_coins' number of
ways to make  change with coins of value 'rem'

*/

int fun(int level, int rem) /// (0, 5)
{
    if(level == k) return (rem == 0);
    if(dp[level][rem] != -1) return dp[level][rem];

    int ans = 0;
    for(int freq = 0; freq*coins[level] <= rem; freq++){
        ans += fun(level + 1, rem - freq*coins[level]);
    }

    return dp[level][rem] = ans;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> coins[i];

    memset(dp, -1, sizeof dp);

    cout << fun(0, n) << nl;

    return 0;
}
