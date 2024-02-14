#include <bits/stdc++.h>
#define ll long long
#define pb push back
#define LIM 1000006
#define mod 1000003
#define nl '\n'
using namespace std;

ll factorial[LIM];

void preprocess()
{
    factorial[0] = 1;
    for(ll i = 1; i < LIM; i++){
        factorial[i] = (i*factorial[i - 1]) %mod;
    }
}

ll bigmod(ll a, ll b)
{
    if(b == 0) return 1;
    ll x = bigmod(a, b/2);
    x = (x*x) %mod;
    if(b%2 == 1) x = (a*x) %mod;
    return x;
}

int main()
{
    preprocess();

    ll t, cas = 1, n, k;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &n, &k);
        ll up = factorial[n];
        ll down = (factorial[k]*factorial[n - k]) %mod;
        ll ans = (up*bigmod(down, mod - 2))%mod;
        printf("Case %lld: %lld\n", cas++, ans);
    }

    return 0;
}
