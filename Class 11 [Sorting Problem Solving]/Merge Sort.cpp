#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
#define nl '\n'
using namespace std;

int arr[LIM];

void mergeSort(int L, int R)
{
    cout << "Range:\n";
    cout << L << " " << R << '\n';
    cout << "Unsorted:\n";
    for(int i = L; i <= R; i++)
        cout << arr[i] << " ";
    cout << nl;

    if(L == R) return;

    int mid = L + (R - L)/2; // (L + R)/2
    mergeSort(L, mid);
    mergeSort(mid + 1, R);

    vector<int> temp;

    int i, j;
    for(i = L, j = mid + 1; i <= mid && j <= R; ){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= R){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = L, j = 0; j < temp.size(); i++, j++)
        arr[i] = temp[j];

    cout << "Sorted\n";
    for(int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << nl;
}

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}

/*

10
23 1 9 5 3 17 12 6 19 5

*/
