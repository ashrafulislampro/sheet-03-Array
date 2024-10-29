#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int result = INT_MAX, min_value = arr[0] - 0;
        for (int j = 1; j < N; j++)
        {
            result = min(result, min_value + arr[j] + j);
            min_value = min(min_value, arr[j] - j);
        }

        cout << result << endl;
    }
    return 0;
}