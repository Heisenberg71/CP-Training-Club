#include <bits/stdc++.h>
#define LIM 300005
using namespace std;

int arr[LIM], check[LIM];

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++){
        int value = arr[i];
        check[value]++;
    }

    vector <int> vec;
    for(int value = 0; value < LIM; value++){ /// O(LIM*N)
        if(check[value] > 0){
            for(int i = 0; i < check[value]; i++) /// O(N)
                vec.push_back(value);
        }
    }

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << '\n';

    /// check[4] = 1
    /// check[3] = 1
    /// check[2] = 1
    /// check[12] = 1
    /// check[10] = 1
    /// check[3] = 2
    /// check[5] = 1
    /// check[7] = 1

    /// 4 3 2 12 10 3 5 7
    /// check[x] = count of all the occurence of x in the array

/*

7

4
3
9
21
20
14
75
87
96


1 2 3 4 5 7 7 9 9 14 20 21 75 87 96

*/

    return 0;
}
