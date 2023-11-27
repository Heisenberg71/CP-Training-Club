#include <bits/stdc++.h>
#define ll long long
using namespace std;

int arr[100005];

int lowerBound(int L, int n)
{
    int lo = 0, hi = n - 1, ans = n;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] >= L){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int upperBound(int R, int n)
{
    int lo = 0, hi = n - 1, ans = n;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] > R){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int t, cas = 1;
    scanf("%d", &t);
    while(t--){
        int n, q;
        scanf("%d %d", &n, &q);
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        printf("Case %d:\n", cas++);

        while(q--){
            int L, R;
            scanf("%d %d", &L, &R);
            printf("%d\n", upperBound(R, n) - lowerBound(L, n));
        }
    }

    return 0;
}
