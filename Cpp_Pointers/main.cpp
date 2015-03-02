#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *pointer = NULL; //uninitialized pointers should be set to Null for safety reasons.
    *pointer = &x;

    cout << pointer << '\n'; //should print address
    cout << &x << '\n'; //should also print address
    cout << *pointer << '\n'; //should print 5

    *pointer = 10;
    cout << x << '\n';
    return 0;
}
