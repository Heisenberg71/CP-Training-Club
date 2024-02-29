#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

int dp[LIM];

int fib(int n)
{
    cout << "currently: " << n << nl;

    if(n <= 1) return n; /// Base Case
    if(dp[n] != -1) return dp[n]; /// Memorization

    return dp[n] = fib(n - 1) + fib(n - 2); /// Recursive Formula
}

int main()
{
    int t, n;
    cin >> t;
    memset(dp, -1, sizeof dp);

    while(t--){
        cin >> n;
        cout << fib(n) << nl;
    }
}
