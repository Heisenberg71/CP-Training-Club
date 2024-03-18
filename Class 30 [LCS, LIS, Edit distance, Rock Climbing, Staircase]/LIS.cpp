#include<iostream>
#define ll long long
#define nl '\n'
using namespace std;

int n;
int arr[1003], dp[1003][1003];

int LIS(int currPos, int prevIdx)
{
    //cout << currPos << ' ' << prevIdx << nl;

    if(currPos == n) return 0;
    if(dp[currPos][prevIdx] != -1) return dp[currPos][prevIdx];

    int take = 0;
    if(prevIdx == n || arr[prevIdx] < arr[currPos]) take = 1 + LIS(currPos + 1, currPos);
    int notTake = LIS(currPos + 1, prevIdx);

    int ans = max(take, notTake);

    return dp[currPos][prevIdx] = ans;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            dp[i][j] = -1;

    cout << LIS(0, n) << nl;

    return 0;
}
