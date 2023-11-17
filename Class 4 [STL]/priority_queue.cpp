#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    int x;
    cin >> x;

    priority_queue<int> pq;
    cout << " largest to smallest" << nl;
    pq.push(10);
    pq.push(12);
    pq.push(-2);
    pq.push(-5);
    pq.push(3);
    pq.push(-9);
    while(!pq.empty()){
        cout << pq.top() << nl;
        pq.pop();
    }

    cout << " smallest to largest " << nl;

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);
    pq2.push(12);
    pq2.push(-2);
    pq2.push(-5);
    pq2.push(3);
    pq2.push(-9);
    while(!pq2.empty()){
        cout << pq2.top() << nl;
        pq2.pop();
    }

    return 0;
}
