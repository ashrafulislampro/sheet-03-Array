#include <bits/stdc++.h>
using namespace std;
bool isLeapYear(int y)
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}
int daysInMonth(int m, int y)
{
    if (m == 2)
    {
        return isLeapYear(y) ? 29 : 28;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    return 31;
}
int getStartDayOfWeek( int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int K = year % 100;
    int J = year / 100;
    int day = 1; 
    int h = (day + (13 * (month + 1)) / 5 + K + (K / 4) + (J / 4) - 2 * J) % 7;
    int startDay = (h + 5) % 7;
    return startDay;
}
int main()
{
    int Y;
    cin >> Y;
    int totalRows = 0;
    for (int month = 1; month <= 12; month++)
    {
        int days = daysInMonth(month, Y);
        int startDay = getStartDayOfWeek(month,Y);

        int rows = (days + startDay + 6) / 7;
        totalRows += rows;
    }
    cout << totalRows << endl;
    return 0;
}