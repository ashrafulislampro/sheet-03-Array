#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long *arr = new long long[N + 1]();
    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            arr[i] = 0;
        }
        if (i == 2)
        {
            arr[i] = 1;
        }
        if (i > 2)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    cout << arr[N] << endl;
    delete[] arr;
    return 0;
}