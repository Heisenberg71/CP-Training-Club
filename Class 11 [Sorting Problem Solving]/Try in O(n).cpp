#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int arr[102], indexOf[102];

/// indexOf[a] = current index of value a

int main()
{
    int t, n, cas = 1;

    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        /// index:   1 2 3 4
        /// arr:     4 2 3 1
        /// indexOf: 4 2 3 1
        for(int i = 1; i <= n; i++){
            int value = arr[i];
            indexOf[value] = i;
        }

        int swapCount = 0;
        for(int small = 1; small <= n; small++){
            if(small != arr[small]){
                int idx = indexOf[small];
                int x = arr[small];
                swap(arr[small], arr[idx]);

                indexOf[x] = idx;
                indexOf[small] = small;
                swapCount++;
            }
//            for(int i = 1; i <= n; i++)
//                cout << arr[i] << ' ';
//            cout << nl;
        }

        cout << "Case " << cas++ << ": " << swapCount << nl;
    }
}
