#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

mt19937 mt;

int arr[LIM];

int makePartition(int L, int R, int pivot) /// L = 4, R = 8, pivot = 19
{
    while(L <= R){
        while(arr[L] < pivot){
            L++;
        }
        /// arr[L] = 19, L = 8
        while(arr[R] > pivot){
            R--;
        }
        /// arr[R] = 19, R = 8

        if(L <= R){
            swap(arr[L], arr[R]);
            L++, R--;
        }
    }

    return L; /// L = 9;
}
/**

L = 4, R = 8
arr[L] = 3, arr[R] = 19

10
23 1 9 5 [3 17 12 6 19] 5

*/

void quickSort(int L, int R, int n)
{
    if(L >= R) return;

    cout << L << " index " << R << nl;
    //cout << arr[L] << " values " << arr[R] << nl;

    int pivotIdx = L + mt()%(R - L);
    int partition_index = makePartition(L, R, arr[pivotIdx]); /// partition_index = 9

    quickSort(L, partition_index - 1, n); /// L = 0
    quickSort(partition_index, R, n); /// R = n - 1
}

/**

[4 3 2 1 0 5 6 7 8]

[0] [1 2 3 4 5 6 7 8 9 ]

[1 2 3 4 5 6 7 8 9 ]
[1] [ 2 3 4 5 6 7 8 9 ]
[1] [ [2[ [3 4 5 6 7 8 9] ]
...
...
...

*/

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(0, n - 1, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';

    return 0;
}

/*

10
23 1 9 5 3 17 12 6 19 5

L = 4, R = 8
arr[L] = 3, arr[R] = 19

*/
