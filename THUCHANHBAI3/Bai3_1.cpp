#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y;
    cout << "Nhap so vao x : " ; cin >> x ;
    cout << "Nhap so vao y : "; cin >> y;
    cout << "Ket qua 1 : " << (x*y + x / y) << endl;
    cout << "Ket qua 2 : " << (x + 1 /(x + 1/(x + 1/(x+y))))<<endl;
    cout << "Ket qua 3 : " << sqrt(pow((3*x+2*y),2)*pow((5*x+1),3))<<endl;
    return 0;
}