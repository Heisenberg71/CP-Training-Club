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
    for(int i = 2; i <= N; i++){
        for(int j = 2*i; j <= N; j += i){
            status[j] = true;
        }
    }

    for(int i = 1; i <= N; i++){
        if(status[i] == false) primes.push_back(i);
    }

    for(int i = 0; i < primes.size(); i++)
        cout << primes[i] << " ";
    cout << nl;
}
