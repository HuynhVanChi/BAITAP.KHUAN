#include <iostream>
using namespace std;
int main ()
{
    string name , from;
    int year;
    float height, weighed;
    bool KQ;
    char TypeOfStudy;
    cout << "Nhap ho va ten : ";
    getline(cin,name);
    cout << "\nNhap nam sinh : ";
    cin >> year;
    cin.ignore();
    cout << "\nNhap que quan : ";
    getline(cin,from);
    cout <<"\nNhap chieu cao : ";
    cin >> height;
    cin.ignore();
    cout << "\nNhap can nang : ";
    cin >> weighed;
    cout << "\nBan da ket hon chua (1 - Da ket hon , 0 - chua ket hon ): ";
    cin >> KQ;
    cout << "\nNhap xep_loai_tot_nghiep : ";
    cin >> TypeOfStudy;
    cout << endl;
    cout <<"****************************************" <<endl;
    cout <<"***********SO YEU LY LICH***************" << endl;
    cout <<"****************************************" << endl;
    cout <<"Ho va ten : " << name << endl;
    cout <<"Nam sinh : " << year << endl;
    cout <<"Que quan : "<< from << endl;
    cout <<"Chieu cao : " << height <<"m" << endl;
    cout <<"Can nang : " << weighed << " Kg"<<endl;
    cout <<"Tinh Trang hon nhan(1 - Da ket hon , 0 - chua ket hon ): " << KQ << endl;
    cout <<"Xep loai tot nghiep THPT : " << TypeOfStudy << endl;

    return 0;
}