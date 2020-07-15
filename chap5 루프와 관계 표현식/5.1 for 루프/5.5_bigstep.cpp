#include <iostream>

int main()
{
    using namespace std;

    cout << "정수를 하나 입력하십시오: ";
    int by;
    cin >> by;

    cout << "갱신크기 : " << by << "\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;

    return 0;
}