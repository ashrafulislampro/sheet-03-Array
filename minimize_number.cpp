#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        bool isTrue = true;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 2 != 0)
            {
                isTrue = false;
                break;
            }

            arr[i] /= 2;
        }
        if (!isTrue)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}