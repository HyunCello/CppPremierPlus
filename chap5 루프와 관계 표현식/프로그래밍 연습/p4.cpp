#include <iostream>

int main()
{
    using namespace std;
    int a = 100000;
    int b = 100000;
    int a_old = a * 0.1;
    int b_old = b * 0.05;
    int n = 0;
    cout << "Hello, World!" << endl;

    while (a >= b)
    {
        a += a_old;
        b += b_old;
        b_old = b * 0.05;

        n += 1;
        cout << a << "   " << b << "   " << n << "  번" << endl;
    }

    cout << n << "번 이후 복리가 더 크게된다\n";
    cout << a << "   " << b << endl;

    return 0;
}