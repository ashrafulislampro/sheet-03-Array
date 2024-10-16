#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        if (a <= 0 || b <= 0)
        {
            break;
        }
        else if (a == b)
        {
            cout << a << " sum =" << a << endl;
        }
        else if (a > b)
        {
            for (int i = b; i <= a; i++)
            {
                cout << i;
                sum += i;
                if (i != a)
                {
                    cout << " ";
                }
            }
            cout << " sum =" << sum << endl;
        }
        else if (b > a)
        {
            for (int i = a; i <= b; i++)
            {
                cout << i;
                sum += i;
                if (i != b)
                {
                    cout << " ";
                }
            }
            cout << " sum =" << sum << endl;
        }
    }
    return 0;
}