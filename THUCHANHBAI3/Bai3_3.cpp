#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a , b , c ;
    cout << "Nhap canh a :";
    cin >> a;
    cout << "Nhap canh b :";
    cin >> b;
    cout << "Nhap canh c :";
    cin >> c;
    float S , p ;
    p = (a + b + c)/2;
    cout << p <<endl;
    S = sqrt(p*(p - a)*(p - b)*(p - c));
    cout << "Dien tich tam giac la :" << S << endl;
    return 0;
}