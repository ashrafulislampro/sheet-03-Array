#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B, len;
    string str;
    cin >> A >> B >> str;
    len = str.length();
     if (str[A] != '-')
        {
            cout << "No" << endl;
            return 0;
        }
    for (int i = 0; i < len; i++)
    {       
       
        if (i != A && !isdigit(str[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}