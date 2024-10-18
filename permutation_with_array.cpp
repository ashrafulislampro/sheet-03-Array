#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int i = 0; i < N; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;

    return 0;
}