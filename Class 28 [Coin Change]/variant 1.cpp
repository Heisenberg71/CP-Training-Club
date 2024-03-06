#include <bits/stdc++.h>
#define ll long long
#define LIM 1003
using namespace std;

int n, k;
int coins[LIM], dp[LIM];

/**

fun(n) = 0/1

If n can be made using k coins fun(n) = 1
else fun(n) = 0

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
        ans |= fun(n - coins[i]); /// recursive calls
    }

    return dp[n] = ans;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> coins[i];

    memset(dp, -1, sizeof dp);

    if(fun(n)) cout << "Possible\n";
    else cout << "Impossible\n";

    return 0;
}
