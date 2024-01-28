#include <bits/stdc++.h>
#define nl '\n'
#define LIM 100005
using namespace std;

bool status[LIM];
vector<int> primes;
// false -> Prime
// true -> not prime

int main()
{
    int N;
    cin >> N;

    status[1] = true;
    for(int i = 2; i <= N; i++){/// i = 2
        for(int j = i + i; j <= N; j += i){
            /// j = 4, 6, 8, 10, 12
            status[j] = true;
        }
    }

    for(int i = 1; i <= N; i++){
        if(status[i] == false) primes.push_back(i);
    }

    for(int i = 0; i < primes.size(); i++)
        cout << primes[i] << " ";
    cout << nl;

    return 0;
}
