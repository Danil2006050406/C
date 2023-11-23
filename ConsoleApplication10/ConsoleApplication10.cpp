#include <iostream>
#include <iomanip>
using namespace std;
struct a
{
    char marka[20];
    int day;
    int month;
    char stan[5];
}
remont[6] = { {"LG",13,4,"no"},{"Sony",2,5,"no"},
            {"Sharp",10,1,"yes"},{"LG",15,3,"yes"},
            {"Samsung",19,2,"yes"},{"Sony",12,1,"no"} };
int main()
{
    int i;
    bool b=0;
    cout << "Database:\n";
    for (i = 0; i < 6; i++)
        cout << setw(12) << remont[i].marka
        << setw(5) << remont[i].day
        << "/" << remont[i].month
        << setw(6) << remont[i].stan << endl;
    int d, m;
    cout << "\nEnter date";
    cout << "\nEnter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    if (d <= 31 && m <= 12) {
        cout << "\nNew base:\n";
        
        for (i = 0; i < 6; i++)
            if (b != remont[i].stan[2]) {
                if (remont[i].month < m || (remont[i].month == m && remont[i].day <= d))
                    cout << setw(12) << remont[i].marka
                    << setw(5) << remont[i].day
                    << "/" << remont[i].month
                    << setw(6) << remont[i].stan << endl;
            }
        system("pause");
    }
    else
        cout << "Error";
    return 0;
}