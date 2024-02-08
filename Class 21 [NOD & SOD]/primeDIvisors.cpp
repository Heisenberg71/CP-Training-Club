#include <bits/stdc++.h>
#define nl '\n'
#define LIM 100005
using namespace std;

bool status[LIM];
vector<int> primeFactors[LIM];
/// false -> Prime
/// true -> not prime

int main()
{
    int N;
    cin >> N;

    for(int i = 2; i <= N; i++){
        if(status[i] == true) continue;
        for(int j = i; j <= N; j += i){
            status[j] = true;
            primeFactors[j].push_back(i);
        }
    }

    for(int i = 0; i <= N; i++){
        cout << "Prime divisors of " << i << ": ";
        for(int j = 0; j < primeFactors[i].size(); j++)
            cout << primeFactors[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
