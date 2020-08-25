#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void nhap_thong_tin_hang_hoa(string *ten, long long *sl, long long *dg, int n);
void hien_thi_danh_sach(string *ten, long long *sl, long long *dg, long long *tt, int n);
void hien_thi_danh_sach_hang_hoa_it_nhat(string *ten, long long *sl, long long *dg, long long *tt, int n);
void xoa_mat_hang_so_luong_bang_0(string *ten, long long *sl, long long *dg, long long *tt, int &n);
void xoa(long long, int, int);
void xoa_ten(string, int, int);
void sap_xep_ten(string *ten, long long *sl, long long *dg, long long *tt, int n);
void swap(long long &a, long long &b);
void nhap_tt_hang_hoa_moi(string *ten, long long *sl, long long *dg, long long *tt, int &n);

int main()
{
    //Tao mang ten, so luong, don gia va thanh tien
    string ten[20];
    long long sl[20];
    long long dg[20];
    long long tt[20];
    int n = 5; // So luong hang hoa hien tai.
    int chon = 0;
    cout << "NHAP VAO DANH SACH 5 HANG HOA.\n\n";
    nhap_thong_tin_hang_hoa(ten, sl, dg, n);
    do{
        cout << "\n===========MENU==========\n";
        cout << "1.Hien thi danh sach hang hoa.\n";
        cout << "2.Sap xep danh sach theo ten hang hoa.\n";
        cout << "3.Hien thi danh sach hang hoa co so luong it nhat.\n";
        cout << "4.Xoa cac hang hoa co so luong bang 0.\n";
        cout << "5.Nhap them thong tin cua 1 hang hoa moi.\n";
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
                    hien_thi_danh_sach(ten, sl, dg, tt, n);
                   break;
                }
            case 2:
                {
                    sap_xep_ten(ten, sl, dg, tt, n);
                   break;
                }
            case 3:
                {
                    hien_thi_danh_sach_hang_hoa_it_nhat(ten, sl, dg, tt, n);
                   break;
                }
            case 4:
                {
                    xoa_mat_hang_so_luong_bang_0(ten, sl, dg, tt, n);
                   break;
                }
            case 5:
                {
                    nhap_tt_hang_hoa_moi(ten, sl , dg, tt, n);
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

void nhap_thong_tin_hang_hoa(string *ten, long long *sl, long long *dg, int n)
{
    for(size_t i = 0; i < n; i++)
    {
        cout << "NHAP VAO THONG TIN HANG HOA THU " << i+1 << ".\n";
        cout << "Ten hang hoa: ";
        getline(cin, ten[i]);
        cout << "So luong: ";
        cin >> sl[i];
        cout << "Don gia: ";
        cin >> dg[i];
        cout << "==================================\n\n";
        cin.ignore();
    }
}
void hien_thi_danh_sach(string *ten, long long *sl, long long *dg, long long *tt, int n)
{
    cout << "\nDANH SACH MAT HANG:\n\n";
    cout << setw(15) << "TEN HANG" << setw(15) << "SO LUONG" << setw(15)<< "DON GIA" << setw(15)<< "THANH TIEN" << endl;
    for(size_t i = 0; i < n; i++)
    {
        tt[i] = sl[i] * dg[i];
        cout << setw(15) << ten[i] << setw(15) << sl[i] << setw(15) << dg[i] << setw(15) << tt[i] << endl;
    }
}
void hien_thi_danh_sach_hang_hoa_it_nhat(string *ten, long long *sl, long long *dg, long long *tt, int n)
{
    int min = sl[0];
    for(size_t i = 1; i < n; i++)
    {
        if(min > sl[i])
        {
            min = sl[i];
        }
    }
    cout << "\nDANH SACH MAT HANG CO SO LUONG IT NHAT.\n\n";
    cout << setw(15) << "TEN HANG" << setw(15) << "SO LUONG" << setw(15)<< "DON GIA" << setw(15)<< "THANH TIEN" << endl;
    for(size_t i = 0; i < n; i++)
    {
        if(sl[i] == min)
        {
            cout << setw(15) << ten[i] << setw(15) << sl[i] << setw(15) << dg[i] << setw(15) << tt[i] << endl;
        }
    }
}
void xoa(long long *a, int i, int n)
{
   for( ; i < n-1; i++)
   {
       a[i] = a[i+1];
   }
}
void xoa_ten(string *a, int i, int n)
{
    for(; i < n-1; i++)
    {
        a[i].swap(a[i+1]);
    }
}
void xoa_mat_hang_so_luong_bang_0(string *ten, long long *sl, long long *dg, long long *tt, int &n)
{
  for(int i = 0; i < n; i++)
  {
      if(sl[i] == 0)
      {
          xoa_ten(ten, i, n);
          xoa(sl, i, n);
          xoa(dg, i, n);
          xoa(tt, i, n);
          n--;
      }
  }
  cout << "\n\nSAU XOA.";
  hien_thi_danh_sach(ten, sl, dg, tt, n);
}
void swap(long long &a, long long &b)
{
    long long tmp = a;
    a = b;
    b = tmp;
}
void sap_xep_ten(string *ten, long long *sl, long long *dg, long long *tt, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ten[i].compare(ten[j]) == 1)
            {
               ten[i].swap(ten[j]);
               swap(sl[i], sl[j]);
               swap(dg[i], dg[j]);
               swap(tt[i], tt[j]);
            }
        }

    }
    cout << "\nDANH SACH SAU KHI SAP XEP.\n\n";
    hien_thi_danh_sach(ten, sl, dg, tt, n);
}
void nhap_tt_hang_hoa_moi(string *ten, long long *sl, long long *dg, long long *tt, int &n)
{
    cin.ignore();
    cout << "\nNHAP THEM THONG TIN MAT HANG.\n";
    cout << "Ten hang hoa: ";
    getline(cin, ten[n]);
    cout << "So luong: ";
    cin >> sl[n];
    cout << "Don gia: ";
    cin >> dg[n];
    cout << "==================================\n\n";
    n++;
    hien_thi_danh_sach(ten, sl, dg, tt, n);
}















