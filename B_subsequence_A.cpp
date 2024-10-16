#include <iostream>
using namespace std;

int main()
{
    int N, M, temp = 0;
    bool subsequence = true;
    cin >> N >> M;
    long long *arr1 = new long long[N + 1]();
    long long *arr2 = new long long[M + 1]();

    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {

            if ((arr2[i] == arr1[j]) && (j < temp))
            {                
                subsequence = false;
                break;
            }
            if (arr2[i] == arr1[j])
            {
                temp = j;
            }
        }
    }

    cout << (subsequence ? "YES" : "NO") << endl;
    return 0;
}