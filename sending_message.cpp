#include <bits/stdc++.h>

using namespace std;
int main()
{
    string word1, word2;
    while (cin >> word1 >> word2)
    {
        bool isTrue = false;
        int len1 = word1.length();
        int len2 = word2.length();
        for (int i = 0, j = 0; i < len1; i++)
        {
            if (word1[i] == word2[j])
            {
                j++;
            }
            if (j == len2)
            {
                isTrue = true;
            }
        }
        cout << (isTrue ? "Possible" : "Impossible") << endl;
    }
    return 0;
}