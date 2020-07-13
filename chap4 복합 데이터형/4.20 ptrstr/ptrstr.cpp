// 문자열을 지시하는 포인터의 사용
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20] = "bear";      // animal에 bear가 들어 있다
    const char * bird = "wren";    // bird에 문자열의 주소가 들어있다
    char * ps;                     // 초기화되지 않음

    cout << animal << " and ";     // bear 출력
    cout << bird << "\n";          // wren 출력
    // cout << ps << "\n"          // 쓰레기를 출력하거나 먹통이 될 수도 있다


}