#include <iostream>
using namespace std;

int main()
{
    int N, Q, R, L;
    cin >> N >> Q;
    long long *arr = new long long[N + 1]();
    arr[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        arr[i] = arr[i - 1] + x;
    }
    while (Q--)
    {
        cin >> L >> R;
        cout << arr[R] - arr[L - 1] << endl;
    }
    return 0;
}