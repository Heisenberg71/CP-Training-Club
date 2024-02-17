#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

int color[LIM], freq[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> color[i];

    int maxUsedColors;
    cin >> maxUsedColors;

    int maxRange = 0, currentlyUse = 0;
    for(int L = 0, R = 0; R < n; R++){
        if(freq[ color[R] ] == 0) currentlyUse++;
        freq[ color[R] ]++;
        while(maxUsedColors < currentlyUse){
            freq[ color[L] ]--;
            if(freq[ color[L] ] == 0) currentlyUse--;
            L++;
        }
        maxRange = max(maxRange, R - L + 1);
    }

    cout << maxRange << nl;

    return 0;
}


