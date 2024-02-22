#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

int arr[LIM];
ll prefSum[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        prefSum[i] = prefSum[i - 1] + arr[i];
    }

    ll max_sum_subarray = 0, minPrefSum = 0;
    for(int R = 0; R <= n; R++){
        max_sum_subarray = max(max_sum_subarray, prefSum[R] - minPrefSum);
        minPrefSum = min(minPrefSum, prefSum[R]);
    }

    cout << max_sum_subarray << nl;

    return 0;
}
