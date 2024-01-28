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

    for(int i = 4; i <= N; i += 2)
        status[i] = true;

    for(int i = 3; i <= N; i += 2){ /// i = 3
        if(status[i] == true) continue;
        for(int j = i*i; j <= N; j += i + i){ /// j = 9, 15, 21......
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
