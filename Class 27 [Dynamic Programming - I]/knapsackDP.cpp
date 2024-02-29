#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define LIM 100005
using namespace std;

int N, W;
int w[102]; /// weight of each item
int v[102]; /// profit of each item
ll dp[102][LIM];

ll fun(int index, int rem) /// f(index, rem) = Max Profit taking or not taking items from [index, n) when remaining size of knapsack is 'rem'
{
    if(index >= N) return 0; /// Base Case
    if(dp[index][rem] != -1) return dp[index][rem]; /// memorization

    ll take = 0;
    if(rem >= w[index]) take = v[index] + fun(index + 1, rem - w[index]);
    ll doNotTake = fun(index + 1, rem);
    /// recursive formula

    return dp[index][rem] = max(take, doNotTake);
}

int main()
{
    memset(dp, -1, sizeof dp);

    cin >> N >> W;
    for(int i = 0; i < N; i++)
        cin >> w[i] >> v[i];

    cout << fun(0, W) << nl;

    return 0;
}
