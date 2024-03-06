#include <bits/stdc++.h>
#define ll long long
#define LIM 1003
#define nl '\n'
using namespace std;

int n, k;
int coins[LIM], dp[LIM][LIM];

/**

fun(idx, rem) = number of ways
number of ways where it's possible to make 'rem' taking/not-taking values from [idx, k) index


*/

int fun(int idx, int rem)
{
    if(idx == k){
        if(rem == 0) return 1;
        return 0;
    }

    if(dp[idx][rem] != -1) return dp[idx][rem];

    int take = 0;
    if(coins[idx] <= rem) take = fun(idx + 1, rem - coins[idx]);
    int notTake = fun(idx + 1, rem);

    return dp[idx][rem] = (take + notTake);
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> coins[i];

    memset(dp, -1, sizeof dp);

    cout << "number of ways: " << fun(0, n) << nl;

    return 0;
}
