#include <iostream>
#include <string.h>
#include <iomanip>

#define MAX 100
using namespace std;

char ten_hang[MAX][MAX];
int so_luong[MAX];
long gia_tien[MAX];
long thanh_tien[MAX];
int so_san_pham;

void menu();
int chon(); // l?a ch?n
void tao_danh_sach_hang_hoa(); // T?o danh sách s?n ph?m
void nhap_hang_hoa(int); // Nh?p thông tin hàng hóa v?i tham s? truy?n vào là s? lu?ng hàng hóa
bool quay_ve_menu(); // H?i có quay v? menu không
void hien_thi_mot_hang_hoa(int); // Hi?n th? m?t hàng hóa v?i tham s? truy?n vào là v? trí c?a hàng hóa 
void hien_thi_danh_sach_hang_hoa(); // Hi?n th? toàn b? danh sách hàng hóa
void tinh_tong_thanh_tien(); // Tính t?ng thành ti?n
void sap_xep_danh_sach_A_Z(); // S?p x?p danh sách theo th? t? t? di?n
void swap (char hang_1[], char hang_2[]); // Ð?i ch? 2 chu?i ký t?
void swap (int &tien_1, int &tien_2); // Ð?i ch? 2 s?
void swap (long &tien_1, long &tien_2);
void hien_thi_nhung_hang_hoa_it_nhat(); // Hi?n th? nh?ng m?t hàng có ít nh?t
void sap_xep_danh_sach_tang_dan(); // S?p x?p danh sách theo chi?u tang d?n s? lu?ng ph?n t?
void xoa_cac_hang_hoa_het_hang(); // xóa nh?ng s?n ph?m dã h?t
void xoa_phan_tu(int); // xóa m?t ph?n t? ? v? trí ch?n
void nhap_mot_hang_hoa_moi(); // Thêm m?t s?n ph?m vào cu?i danh sách

int main(){
    menu();
    return 0;
}

int chon(){
    int lua_chon;
    cout <<"Menu\n"
         << "Nhan phim 1 de tao danh sach san pham\n"
         << "Nhan phim 2 de hien thi danh sach hang hoa\n"
         << "Nhan phim 3 de tinh tong tien\n"
         << "Nhan phim 4 de sap xep danh sach hang hoa theo thu tu bang chu cai\n"
         << "Nhan phim 5 de hien thi nhung hang hoa co so luong thap nhat\n"
         << "Nhan phim 6 de xoa cac hang hoa het\n"
         << "Nhan phim 7 de them mot san pham\n";
    cout << "Lua chon cua ban la: ";
    cin >> lua_chon;
    return lua_chon;
}

void menu(){
    point:
    switch (chon()){
        case 1:{
            cout << "\nTao danh sach hang hoa\n";
            tao_danh_sach_hang_hoa();
            // con_hang = true;
            if(quay_ve_menu())
                goto point;      
            break;    
        }
        case 2: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nHien thi toan bo danh sach san pham\n";
                hien_thi_danh_sach_hang_hoa();
                break;
            }
        }
        case 3: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nTinh tong tien toan bo san pham\n";
                tinh_tong_thanh_tien();
                break;
            }
        }
        case 4: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nSap xep danh sach\n";
                sap_xep_danh_sach_A_Z();
                break;
            }
        }
        case 5: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nNhung mat hang con it nhat\n";
                hien_thi_nhung_hang_hoa_it_nhat();
                break;
            }
        }
        case 6: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nXoa nhung hang het\n";
                cout << "Danh sach sau khi xoa hang het:\n";
                xoa_cac_hang_hoa_het_hang();
                break;
            }
        }
        case 7: {
            if (0 == so_san_pham){
                cout << "Khong co san phan nao!";
                if(quay_ve_menu())
                    goto point; 
                break;
            }
            else{
                cout << "\nThem mot san pham\n";
                nhap_mot_hang_hoa_moi();
                cout << "Danh sach sau khi them:\n";
                hien_thi_danh_sach_hang_hoa();
                break;
            }
        }
            
        default:
            break;
    }
}

void nhap_hang_hoa(int so_hang){
    for (int i = 0; i < so_hang; i++){
        cout << "Nhap san pham thu " << i + 1 << " :\n";
        cout << "Nhap ten hang: ";
        cin.ignore();
        cin.getline(ten_hang[i], MAX);
        cout << "Nhap so luong: ";
        cin >> so_luong[i];
        cout << "Nhap don gia: ";
        cin >> gia_tien[i];
        thanh_tien[i] = gia_tien[i] * so_luong[i];
    }
}

bool quay_ve_menu(){
    char quay_ve;
    cout << "Quay ve menu chu [Y/N]? ";
    cin.ignore();
    cin >> quay_ve;
    return (quay_ve == 'y' || quay_ve == 'Y');
}

void tao_danh_sach_hang_hoa(){
    int so_hang;
    cout << "Nhap so luong hang hoa: ";
    cin >> so_hang;
    nhap_hang_hoa(so_hang);
    so_san_pham += so_hang;
}

void hien_thi_mot_hang_hoa(int vi_tri){
    cout << setw(5) << vi_tri + 1;
    cout << setw(15) << ten_hang[vi_tri];
    cout << setw(10) << so_luong[vi_tri];
    cout << setw(12) << gia_tien[vi_tri];
    cout << setw(15) << thanh_tien[vi_tri] << endl;
}

void hien_thi_danh_sach_hang_hoa(){
    cout << setw(5) << "STT";
    cout << setw(15) << "Ten hang";
    cout << setw(10) << "So luong";
    cout << setw(12) << "Don gia";
    cout << setw(15) << "Thanh tien" << endl;
    for (int i = 0; i < so_san_pham; i++){
        hien_thi_mot_hang_hoa(i);
    }
}

void tinh_tong_thanh_tien(){
    cout << setw(5) << "STT";
    cout << setw(15) << "Ten hang";
    cout << setw(10) << "So luong";
    cout << setw(12) << "Don gia";
    cout << setw(15) << "Thanh tien" << endl;
    long tong_tien = 0;
    for (int i = 0; i < so_san_pham; i++){
        hien_thi_mot_hang_hoa(i);
        tong_tien += thanh_tien[i];
    }
    cout << setw(57) << "Tong cong: " << tong_tien;
}

void swap (char hang_1[], char hang_2[]){
    char temp[MAX];
    strcpy(temp, hang_1);
    strcpy(hang_1, hang_2);
    strcpy(hang_2, temp);
}

void swap (int &tien_1, int &tien_2){
    int temp = tien_1;
    tien_1 = tien_2;
    tien_2 = temp;   
}

void swap (long &tien_1, long &tien_2){
    long temp = tien_1;
    tien_1 = tien_2;
    tien_2 = temp;
}

void sap_xep_danh_sach_A_Z(){
    for (int i = 0; i < so_san_pham; i++){
        for (int j = i + 1; j < so_san_pham; j++){
            if (strcmp(ten_hang[i], ten_hang[j]) == 1){
                swap(ten_hang[i], ten_hang[j]);
                swap(so_luong[i], so_luong[j]);
                swap(gia_tien[i], gia_tien[j]);
                swap(thanh_tien[i], thanh_tien[j]);
            }
        }
    }
    hien_thi_danh_sach_hang_hoa();
}

void sap_xep_danh_sach_tang_dan(){
    for (int i = 0; i < so_san_pham; i++){
        for (int j = i + 1; j < so_san_pham; j++){
            if (so_luong[i] > so_luong[j]){
                swap(ten_hang[i], ten_hang[j]);
                swap(so_luong[i], so_luong[j]);
                swap(gia_tien[i], gia_tien[j]);
                swap(thanh_tien[i], thanh_tien[j]);
            }
        }
    }
}

void hien_thi_nhung_hang_hoa_it_nhat(){
    cout << setw(5) << "STT";
    cout << setw(15) << "Ten hang";
    cout << setw(10) << "So luong";
    cout << setw(12) << "Don gia";
    cout << setw(15) << "Thanh tien" << endl;
    sap_xep_danh_sach_tang_dan();
    for (int i = 0; i < so_san_pham; i++){
        if (so_luong[i] == so_luong[0]){
            hien_thi_mot_hang_hoa(i);
        }
        else{
            break;
        }
    }
}

void xoa_phan_tu(int vi_tri){
    for (int i = vi_tri; i < so_san_pham; i++){
        strcpy(ten_hang[i], ten_hang[i + 1]);
        so_luong[i] = so_luong[i + 1];
        gia_tien[i] = gia_tien[i + 1];
        thanh_tien[i] = thanh_tien[i + 1];
    }
    so_san_pham--;
}

void xoa_cac_hang_hoa_het_hang(){
    for (int i = 0; i < so_san_pham; i++){
        if (0 == so_luong[i]){
            xoa_phan_tu(i);
        }
    }
    hien_thi_danh_sach_hang_hoa();
}

void nhap_mot_hang_hoa_moi(){
    cout << "Nhap san pham thu " << so_san_pham + 1 << " :\n";
    cout << "Nhap ten hang: ";
    cin.ignore();
    cin.getline(ten_hang[so_san_pham], MAX);
    cout << "Nhap so luong: ";
    cin >> so_luong[so_san_pham];
    cout << "Nhap don gia: ";
    cin >> gia_tien[so_san_pham];
    thanh_tien[so_san_pham] = gia_tien[so_san_pham] * so_luong[so_san_pham];
    so_san_pham++;
}

