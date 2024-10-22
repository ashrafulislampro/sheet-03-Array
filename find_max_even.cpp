#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, max_ele = 0, max_v = 0;
    cin >> N;
    int *arr = new int[N + 1]();
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        if (max_ele < x)
        {
            max_ele = x;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == max_ele)
            continue;
        int sum = max_ele + arr[i];
        if (sum % 2 == 0)
        {
            if (sum > max_v)
            {
                max_v = sum;
            }
        }
        else if (arr[i] % 2 == 0)
        {
            if (arr[i] > max_v)
            {
                max_v = arr[i];
            }
        }
    }
    
    cout << (max_v < max_ele && max_ele % 2 == 0 ? max_ele : max_v) << endl;
    return 0;
}