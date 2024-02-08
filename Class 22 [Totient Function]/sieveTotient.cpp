#include<bits/stdc++.h>
#define ull long long
#define pb push_back
#define MAXX 5000006
using namespace std;

int phi[MAXX];
ull prefixSumPhi[MAXX];

void preprocess()
{
    phi[0] = phi[1] = 0;
    for(int i = 2; i < MAXX; i++)
        phi[i] = i;
//    phi[2] = 2
//    phi[3] = 3
//    phi[4] = 4

    for(int i = 2; i < MAXX; i++){
        if(i == phi[i]){
            for(int j = i; j < MAXX; j += i){
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }

    for(int i = 2; i < MAXX; i++){
        ull score = 1LLU*phi[i]*phi[i];
        prefixSumPhi[i] = prefixSumPhi[i - 1] + score;
    }
}

int main()
{
    preprocess();

    int t, cas = 1;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int ans = prefixSumPhi[b] - prefixSumPhi[a - 1];
        printf("Case %d: %llu\n", cas++, ans);
    }

    return 0;
}
