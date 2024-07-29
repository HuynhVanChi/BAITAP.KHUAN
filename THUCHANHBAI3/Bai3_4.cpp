#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n , a = 0;
    cout << "Nhap so vao n :"; cin >> n;
    while(n != 0)
    {
        a = a*10 + n % 10;
        n = n / 10;
    }
    cout << "So dao nguoc : " << a ;
    return 0;
}