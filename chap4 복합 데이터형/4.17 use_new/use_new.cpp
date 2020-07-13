// new 연산자 사용
#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights의 값 = " << nights;
    cout << ": 메모리 위치 = " << &nights << endl;
    cout << "int형";
    cout << "값 = " << *pt << ": 메모리 위치 = " << pt << endl;

    double * pd = new double;
    *pd = 10000001.0;

    cout << "double형";
    cout << "값 = " << *pd << ": 메모리 위치 = " << pd << endl;
    cout << "포인터 pd의 메모리 위치: " << &pd << endl;
    cout << "pt의 크기 = " << sizeof(pt);
    cout << ": *pt의 크기 = " << sizeof(*pt) << endl;
    cout << "pd의 크기 = " << sizeof(pd);
    cout << ": *pd의 크기 = " << sizeof(*pd) << endl;

    return 0;

}