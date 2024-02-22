#include <bits/stdc++.h>
#define ll long long
#define LIM 300005
#define nl '\n'
using namespace std;

int arr[LIM];

int main()
{
    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    long long curr_total_sum = 0, ans = 0;
    for(int L = 0, R = 0; R < n; R++){
        curr_total_sum += arr[R];

        while(curr_total_sum > m){
            curr_total_sum -= arr[L];
            L++;
        }

        ans = max(ans, curr_total_sum);
    }

    cout << ans << nl;

    return 0;
}
