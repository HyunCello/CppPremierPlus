#include <iostream>

int main()
{
    using namespace std;
    char ch;

    cout << "타이핑하시면, 반복 수행하겠습니다." << endl;
    cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }

    cout << "\n혼란스럽게 해서 죄송합니다.\n";

    return 0;
}