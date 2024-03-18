#include <bits/stdc++.h>
#define ll long long
#define inf 100009
#define nl '\n'
using namespace std;

string A, B;
int dp[2003][2003];

int fun(int i, int j)
{
    if(i == A.size() && j == B.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    if(i < A.size() && j < B.size() && A[i] == B[j]){
        return dp[i][j] = fun(i + 1, j + 1);
    }

    int Delete = inf, Insert = inf, Replace = inf;
    if(i < A.size()) Delete = 1 + fun(i + 1, j);
    if(j < B.size()) Insert = 1 + fun(i, j + 1);
    if(i < A.size() && j < B.size()) Replace = 1 + fun(i + 1, j + 1);

    return dp[i][j] = min(Delete, min(Insert, Replace));
}

int main()
{
    int t;

    cin >> t;
    while(t--){
        cin >> A >> B;

        memset(dp, -1, sizeof dp);
        cout << fun(0, 0) << nl;
    }

    return 0;
}
