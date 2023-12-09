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

    for(int standingIdx = 0; standingIdx < n; standingIdx++){
        for(int i = standingIdx - 1; i >= 0; i--){
            if(arr[i + 1] < arr[i]){
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}
