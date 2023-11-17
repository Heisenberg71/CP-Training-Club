#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

/*
    Compare function
    Method overloading
    We will learn these two later
*/

int main()
{
    /// Ascending order sorting
    int n, arr[15];

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); /// O(NlogN)

    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << nl;

    /// Descending Sorting
    sort(arr, arr + n, greater<int>()); /// O(NlogN)
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << nl;

    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << nl;

    /// Sorting of Pairs
    vector<pair<int, int>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << nl;
}
