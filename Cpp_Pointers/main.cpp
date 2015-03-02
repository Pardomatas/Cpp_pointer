#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *pointer = &x;

    cout << pointer << '\n'; //should print address
    cout << &x << '\n'; //should also print address
    cout << *pointer << '\n'; //should print 5
    return 0;
}
