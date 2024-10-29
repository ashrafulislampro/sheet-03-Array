#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, item;
    bool isTrue = false;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> item;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (item == arr[i][j])
            {
                cout << "will not take number" << endl;
                return 0;
            };
        }
    }
    cout << "will take number" << endl;
    return 0;
}