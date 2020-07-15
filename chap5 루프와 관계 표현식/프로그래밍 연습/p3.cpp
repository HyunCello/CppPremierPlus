#include <iostream>

int main()
{
    using namespace std;
    int sum = 0;
    int i;

    while (i != 0)
    {
        cout << "더할 값을 작성해주세요 : ";
        cin >> i;
        sum += i;
        cout << "더해진 값 : " << sum << endl
             << endl;
    }
    return 0;
}