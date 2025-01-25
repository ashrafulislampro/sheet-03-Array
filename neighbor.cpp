#include <bits/stdc++.h>
using namespace std;
bool isNeighbor(char arr[][100], int N, int M, int X, int Y)
{

    bool isTrue = true;
    if (Y < M - 1 && (arr[X][Y + 1] != 'x'))
    {

        isTrue = false;
    }
    if (Y > 0 && (arr[X][Y - 1] != 'x'))
    {

        isTrue = false;
    }
    if (X < N - 1 && (arr[X + 1][Y] != 'x'))
    {

        isTrue = false;
    }
    if (X < N - 1 && Y > 0 && (arr[X + 1][Y - 1] != 'x'))
    {

        isTrue = false;
    }
    if (X < N - 1 && Y < M - 1 && (arr[X + 1][Y + 1] != 'x'))
    {

        isTrue = false;
    }
    if (X > 0 && (arr[X - 1][Y] != 'x'))
    {

        isTrue = false;
    }
    if (X > 0 && Y < M - 1 && (arr[X - 1][Y + 1] != 'x'))
    {

        isTrue = false;
    }
    if (X > 0 && Y > 0 && (arr[X - 1][Y - 1] != 'x'))
    {

        isTrue = false;
    }

    return isTrue;
}
int main()
{

    int N, M, X, Y;
    cin >> N >> M;
    char arr[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> X >> Y;

    bool isTrue = isNeighbor(arr, N, M, X - 1, Y - 1);

    cout << (isTrue ? "yes" : "no") << endl;
    return 0;
}