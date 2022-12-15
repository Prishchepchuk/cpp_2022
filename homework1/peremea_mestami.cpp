#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    a = a - b;
    b = a + b;
    a = b - a;
    cout << a << ' ' << b;

    return 0;
}
