#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define MOD 1000000007
#define nl '\n'
using namespace std;

int dp[LIM];

int factorial(int n)
{
    cout << "currently: " << n << nl;
    if(n == 0) return 1;    /// Base case
    if(dp[n] != 0) return dp[n]; /// Memorization

    return dp[n] = (1LL*n*factorial(n - 1)) %MOD; /// Recursive formula
}

int main()
{
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        cout << factorial(n) << nl;
    }
}
