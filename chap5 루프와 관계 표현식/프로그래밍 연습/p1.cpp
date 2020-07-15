#include <iostream>

int main()
{
    using namespace std;

    cout << "두 개의 정수를 입력하세요" << endl;
    cout << "작은 순서부터 입력하세요" << endl;
    int a, b;

    cin >> a;
    cin >> b;

    int sum = 0;
    cout << "더하는중" << endl;
    for (int i = a; i <= b; i++)
    {

        sum += i;
        cout << "더하는 값 : " << i << " 더해진 값 : " << sum << endl;
    }

    cout << "합은 " << sum << "입니다" << endl;

    return 0;
}