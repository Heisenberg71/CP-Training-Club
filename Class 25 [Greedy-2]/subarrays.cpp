#include <bits/stdc++.h>
#define ll long long
#define LIM 1000006
#define nl '\n'
using namespace std;

int arr[LIM];

int main()
{
    int n, k;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k; /// k = 3

    deque<int> dq;

    for(int i = 0; i < n; i++){/// R = 2, L = 0
        int R = i;
        int L = R - k + 1;

        while(!dq.empty() && arr[ dq.back() ] <= arr[R])
            dq.pop_back();
        dq.push_back(R);

        while(!dq.empty() && dq.front() < L)
            dq.pop_front();

        if(L >= 0)
            cout << arr[ dq.front() ] << " ";
    }

    cout << nl;

    return 0;
}
