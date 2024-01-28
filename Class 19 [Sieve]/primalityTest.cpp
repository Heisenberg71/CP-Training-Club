#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
    int N;
    cin >> N;

    bool isPrime = true;
    /// sqrt(25) = 4.9999999 = 4
    /// int sq = sqrt(N)
    for(int p = 2; p*p <= N; p++){
        if(N%p == 0) isPrime = false;
    }

    if(N == 1) isPrime = false;

    if(isPrime == true) cout << "YES! It's a prime" << nl;
    else cout << "It's not a prime" << nl;

    return 0;
}
