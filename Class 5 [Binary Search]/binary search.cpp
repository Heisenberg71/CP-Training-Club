#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n, arr[1003], findValue;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> findValue;

    bool hasFound = false;
    int L = 0, R = n - 1;
    while(L <= R){
        int mid = (L + R)/2; /// 3
        if(arr[mid] == findValue){
            cout << "found on index: " << mid << nl;
            hasFound = true;
            break;
        }
        else if(arr[mid] < findValue){ /// 17 < 11
            L = mid + 1;
        }
        else{
            R = mid - 1;
        }
    }

    if(hasFound == false) cout << "Not Found" << nl;

    return 0;
}
