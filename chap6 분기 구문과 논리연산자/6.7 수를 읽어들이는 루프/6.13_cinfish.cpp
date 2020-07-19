#include <iostream>
const int Max = 5;

int main()
{
    using namespace std;
    double fish[Max];

    cout << "오늘 낚은 물고기의 무게를 입력하십시오" << endl;
    cout << "물고기는 최대" << Max << "마리까지 낚을 수 있습니다.\n"
         << "<입력을 끝내려면 q를 누르십시오>\n";
    cout << "fish #1: ";

    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i + 1 << ": ";
    }

    return 0;
}