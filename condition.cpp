#include <iostream>
using namespace std;

int main()
{
    // int age;
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "you are adult";
    // }else
    // {
    //     cout << "you are under age";
    // }

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "sunday";
        break;
    case 2:
        cout << "monday";
        break;
    case 3:
        cout << "tuesday";
        break;
    case 4:
        cout << "wednesday";
        break;
    case 5:
        cout << "thirsday";
        break;
    case 6:
        cout << "friday";
        break;
    case 7:
        cout << "saturday";
        break;

    default:
        cout << "invalid input for day";
        break;
    }

    return 0;
}