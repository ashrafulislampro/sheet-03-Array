#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, main_dig = 0, second_dig = 0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            main_dig += arr[i][j];
        }
        for (int j = n - i - 1; j >= n - i - 1; j--)
        {
            second_dig += arr[i][j];
        }
    }

    if (main_dig - second_dig < 0)
    {
        cout << second_dig - main_dig << endl;
    }
    else
    {
        cout << main_dig - second_dig << endl;
    }

    return 0;
}