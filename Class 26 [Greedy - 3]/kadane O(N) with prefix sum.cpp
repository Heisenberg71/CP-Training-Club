#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

int arr[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    ll max_sum_subarray = 0, minPrefSum = 0, prefSum = 0;
    for(int R = 0; R <= n; R++){
        prefSum += arr[R];
        max_sum_subarray = max(max_sum_subarray, prefSum - minPrefSum);
        minPrefSum = min(minPrefSum, prefSum);
    }

    cout << max_sum_subarray << nl;

    return 0;
}
/**

10
4 5 -9 4 -10 -3 20 7 -5 6

*/
