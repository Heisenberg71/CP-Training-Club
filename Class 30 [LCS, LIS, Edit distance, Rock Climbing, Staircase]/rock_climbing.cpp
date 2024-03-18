#include<bits/stdc++.h>
#define nl '\n'
using namespace std;

int n, m;
int grid[1003][1003], dp[1003][1003], vis[1003][1003];

int fun(int row, int col)
{
    if(row == n) return 0;
    if(vis[row][col] == 1) return dp[row][col];

    int maxGain = grid[row][col] + fun(row + 1, col); /// up
    if(col - 1 >= 0) maxGain = max(maxGain, grid[row][col] + fun(row + 1, col - 1)); /// left-up
    if(col + 1 < n) maxGain = max(maxGain, grid[row][col] + fun(row + 1, col + 1)); /// right-up

    vis[row][col] = 1;
    return dp[row][col] = maxGain;
}

int main()
{
    int x;

    cin >> n >> m >> x;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    cout << fun(0, x) << nl;

    return 0;
}

/**

4 3 1
14 0 3
-12 6 -7
-9 3 4
4 -5 -2

*/
