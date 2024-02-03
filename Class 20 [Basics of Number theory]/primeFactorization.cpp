#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pll pair<ll, ll>
#define nl '\n'
using namespace std;

vector<pll> factors;

int main()
{
    int N;

    cin >> N;

    int sq = sqrt(N) + 1;
    for(int factor = 2; factor < sq; factor++){
        if(N%factor == 0){
            int cnt = 0;
            while(N%factor == 0){
                N /= factor;
                cnt++;
            }
            factors.pb({factor, cnt});
        }
    }

    if(N != 1) factors.pb({N, 1});

    for(int i = 0; i < factors.size(); i++){
        cout << "prime factor: " << factors[i].ff << " power: " << factors[i].ss << nl;
    }

    return 0;
}
