#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll bigMod(ll a, ll b, ll M){
    if(b == 0) return 1;

    ll x = bigMod(a, b/2, M);
    ll y = (x*x) %M;

    if(b%2 == 1) y = (y*a) %M;

    return y;
}

int main()
{
    ll a, b, M;
    cin >> a >> b >> M;

    cout << bigMod(a, b, M) << nl;

    return 0;
}
