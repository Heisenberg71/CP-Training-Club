#include <bits/stdc++.h>
#define ll long long
#define LIM 1003
#define nl '\n'
using namespace std;

int n, k;
int coins[LIM], dp[LIM];

/**

fun(n) = number of ways changes can be made
n = amount


*/

int fun(int n)
{
    /// Base Case
    if(n == 0) return 1;
    if(n < 0) return 0;

    /// Memorization
    if(dp[n] != -1) return dp[n];

    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += fun(n - coins[i]); /// recursive calls
    }

    return dp[n] = ans;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> coins[i];

    memset(dp, -1, sizeof dp);

    cout << "Number of ways: " << fun(n) << nl;

    return 0;
}
