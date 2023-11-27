#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
int arr[1003];

bool isPossible(int capa) /// capa = 10
{
    int sum = 0, container = 1;
    for(int i = 0; i < n; i++){
        if(sum + arr[i] <= capa){
            sum += arr[i];
        }
        else{
            sum = arr[i];
            container++;
        }
    }

    if(container > m) return false;
    else return true;
}

int binarySearch(int L, int R)
{
    int lo = L, hi = R, ans;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(isPossible(mid)){
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
        scanf("%d %d", &n, &m);
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int minCapa = 0, maxCapa = 0;
        for(int i = 0; i < n; i++){
            minCapa = max(minCapa, arr[i]);
            maxCapa += arr[i];
        }

        printf("Case %d: %d\n", cas++, binarySearch(minCapa, maxCapa));


    }

    return 0;
}
