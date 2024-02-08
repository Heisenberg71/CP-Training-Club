#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <int> primeFactors;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);

        int N = n;
        for(int p = 2; p*p <= n; p++){
            if(n%p == 0){
                while(n%p == 0){
                    n /= p;
                }
                primeFactors.push_back(p);
            }
        }

        if(n != 1) primeFactors.push_back(n);

        int ans = N;
        for(int i = 0; i < primeFactors.size(); i++){
            ans /= primeFactors[i];
            ans *= (primeFactors[i] - 1);
        }

        printf("%d\n", ans);

        primeFactors.clear();
    }

    return 0;
}
