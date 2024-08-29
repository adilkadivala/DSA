#include <iostream>
using namespace std;

// recursion

// when a function call it self it's called a recusive function

int count = 1;

void increment()
{
    if (count == 3)
        return;
    cout << count << endl;

    count++;
    increment(); // function calling it self
}

int main()
{
    increment();
    return 0;
}