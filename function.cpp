#include <iostream>
using namespace std;

// void
// parameterized
// return

void printfName(string name)
{
    cout << "Hey " << name << endl;
}

int sumOfnumber(int a, int b)
{
    int c = a + b;

    return c;
}

int main()
{
    string name;
    cin >> name;
    printfName(name);

    int num1;
    int num2;
    int total;

    cin >> num1;
    cin >> num2;

    total = sumOfnumber(num1, num2);

    cout << total;

    return 0;
}