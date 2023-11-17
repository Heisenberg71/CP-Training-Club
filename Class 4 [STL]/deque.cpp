#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    deque<int> dq;

    dq.push_front(10);
    dq.push_back(12);
    dq.push_back(1);
    dq.pop_back();
    dq.pop_back();

    cout << dq.size() << '\n';
    dq.pop_back(); // 0
    dq.pop_back();
    cout << dq.size() << '\n';

    return 0;
}
