#include <iostream>
using namespace std;

int main()
{
    // for
    int i = 1;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    while (i <= 10)
    {
        cout << "ADIl" << endl;

        i++;
    }

    do
    {
        cout << "C++" << endl;
        i++;
    } while (i <= 10);

    return 0;
}