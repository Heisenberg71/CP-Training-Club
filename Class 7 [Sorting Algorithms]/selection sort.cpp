#include <bits/stdc++.h>
#define LIM 300005
using namespace std;

int arr[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int standingIdx = 0; standingIdx < n; standingIdx++){ /// O(N*N)
        int minValue = arr[standingIdx];
        int minIdx = standingIdx;
        for(int i = standingIdx; i < n; i++){ /// O(N)
            if(arr[i] < minValue){
                minValue = arr[i];
                minIdx = i;
            }
        }
//        int temp = arr[standingIdx];
//        arr[standingIdx] = arr[minIdx];
//        arr[minIdx] = temp;
        swap(arr[standingIdx], arr[minIdx]);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}
