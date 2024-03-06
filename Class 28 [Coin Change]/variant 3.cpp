#include <bits/stdc++.h>
#define ll long long
#define LIM 1003
#define nl '\n'
using namespace std;

int n, k;
int coins[LIM], dp[LIM][LIM];

/**

fun(idx, rem) = 0/1

if it is possible to make 'rem' taking/not taking values from [idx, k) index, return 1;
else return 0;


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

    return dp[idx][rem] = (take||notTake);
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> coins[i];

    memset(dp, -1, sizeof dp);

    if(fun(0, n)) cout << "Possible\n";
    else cout << "Impossible\n";

    return 0;
}
