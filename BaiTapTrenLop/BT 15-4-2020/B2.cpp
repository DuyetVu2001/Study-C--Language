#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define N 100

void nhap_danh_sach_tien_dien(string *ho, string *ten, long long *dien, int n);
void hien_thi_danh_sach_ho_gia_dinh(string *ho, string *ten, long long *dien, long long *tt, int n);
void tong_tien_thu_duoc(long long *tt, int n);
void sap_xep_ten(string *ho, string *ten, long long *dien, long long *tt, int n);
void ho_gia_dinh_dung_dien_nhieu_nhat(string *ho, string *ten, long long *dien, long long *tt, int n);
void nhap_tt_tien_dien_moi(string *ho, string *ten, long long *dien, int n);
void ho_gd_ten_L(string *ho, string *ten, long long *dien, long long *tt, int n);
int nhap_n();

int main()
{
    int stt[N]; //Mang so thu tu
    string ho[N];// Mang ho dem
    string ten[N]; // Mang ten
    long long dien[N]; //Mang kwh dien tieu thu
    long long tt[N]; //Mang tien dien phai tra

    int n; // n ho gia dinh
    int chon = 0;
    n = nhap_n();
    do{
        cout << "\n===========MENU==========\n";
        cout << "1.Hien thi danh sach cac ho gia dinh.\n";
        cout << "2.Tong tien phai tra cua tat ca ho gia dinh.\n";
        cout << "3.Sap xep ten theo thu tu abc.\n";
        cout << "4.Danh sach ho gia dinh su dung dien nhieu nhat.\n";
        cout << "5.Nhap vao thong tin cua ho gia dinh moi.\n";
        cout << "6.Hien thi ho gia dinh co ten bat dau bang chu cai 'L',\n";
        cout << "Moi ban chon: ";
        cin >> chon;
        switch(chon)
        {
            case 0:
                {
                   break;
                }
            case 1:
                {
                   break;
                }
            case 2:
                {
                   break;
                }
            case 3:
                {
                   break;
                }
            case 4:
                {

                   break;
                }
            case 5:
                {

                   break;
                }
            default:
                {
                    cout << "\nSai gia tri! Vui long chon lai.";
                }
        }
    }while(chon);
    return 0;
}
int nhap_n()
{
    int n;
    do{
        cout << "Nhap so ho gia dinh (>1): ";
        cin >> n;
    }while(n < 1);
    return n;
}
void nhap_danh_sach_tien_dien(string *ho, string *ten, long long *dien, int n)
{
    cout << "NHAP VAO DANH SACH TIEN DIEN.\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << "Ho gia dinh thu " << i+1 << ".\n";
        cout << "Ho dem: ";
        getline(cin, ho);
        cout << "Ten: ";
        getline(cin, ten);
        cout << "So dien: ";
        cin >> dien;
        cin.ignore();
    }
}
void hien_thi_danh_sach_ho_gia_dinh(string *ho, string *ten, long long *dien, long long *tt, int n)
{
    cout << "\nHIEN THI DANH SACH.\n\n";
    cout << setw(5) <<
}
void tong_tien_thu_duoc(long long *tt, int n);
void sap_xep_ten(string *ho, string *ten, long long *dien, long long *tt, int n);
void ho_gia_dinh_dung_dien_nhieu_nhat(string *ho, string *ten, long long *dien, long long *tt, int n);
void nhap_tt_tien_dien_moi(string *ho, string *ten, long long *dien, int n);
void ho_gd_ten_L(string *ho, string *ten, long long *dien, long long *tt, int n);
