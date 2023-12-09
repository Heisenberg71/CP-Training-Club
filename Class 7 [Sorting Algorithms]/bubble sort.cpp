#include <bits/stdc++.h>
#define LIM 300005
#define MAX_LIMIT 100005
using namespace std;

int arr[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < MAX_LIMIT; i++){
        for(int j = 1; j < n; j++){
            if(arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}
