#include<bits/stdc++.h>
#define nl '\n'
using namespace std;

int dp[502][502];

int fun(int prevStepCnt, int rem)
{
    if(rem == 0) return 1;
    if(dp[prevStepCnt][rem] != -1) return dp[prevStepCnt][rem];

    int ans = 0;
    for(int i = prevStepCnt + 1; i <= rem; i++){
        if(i >= rem - i) ans += fun(i, rem - i);
    }

    return dp[prevStepCnt][rem] = ans;
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof dp);
    cout << fun(0, n) << nl;

    return 0;
}
