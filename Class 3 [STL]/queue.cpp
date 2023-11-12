#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    q.push(10);
    q.push(12);
    q.push(1);
    q.push(-5);
    q.push(13);

    cout << "front value: " << q.front() << '\n';
    q.pop();
    cout << "front value: " << q.front() << '\n';

    q.push(20);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << '\n';

    return 0;
}
