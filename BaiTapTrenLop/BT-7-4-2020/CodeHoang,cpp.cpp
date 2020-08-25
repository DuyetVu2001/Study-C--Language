#include <iostream>

using namespace std;

int lua_chon(); 
void giaibai1();
void giaibai2();
void giaibai3();
void giaibai4();
void menu(int);
void nhap_mang(float *, int);
void xuat_mang(float *, int);
bool is_sorted(float *, int); // Ki?m tra m?ng dã s?p x?p hay chua
void make_sub_ar(float *, float *, int);// t?o m?ng hi?u là hi?u c?a 2 ph?n t? liên ti?p c?a m?ng dã cho
void sort_ar(float *, int); // S?p x?p m?ng
void swap(float &, float &); // d?i ch?  2 s?
bool is_strictly_sort(float *, int); // Ki?m tra m?ng dã cho có tang h?n hay gi?m h?n ko
void Merge_sort(float *, float *, float *, int, int); // s?p x?p tr?n cho b2
int lua_chon_3(); // l?a ch?n c?a bài 3 
void menu_3(int, float diem[][4], int so_hoc_sinh ); // menu c?a bài 3
void xuat_danh_sach_diem(float diem[][4], int so_hoc_sinh); // Xu?t danh sách các di?m c?a các h?c sinh
void Nhap_diem(float diem[][4], int so_hoc_sinh); // Nh?p di?m c?a các h?c sinh
void swap_2(float *, float *, int); // Hóan d?i v? trí c?a 2 h?c sinh
void sap_xep_danh_sach(float diem[][4], int so_hoc_sinh); // s?p x?p danh sách di?m theo chi?u gi?m d?n
void diem_trung_binh(float diem[][4], int so_hoc_sinh); // Tình di?m trung bình các môn 
int nhap(char *); // Dùng d? nh?p hàng và c?t c?a ma tr?n, char * là d?  bi?t nh?p hàng hay c?t
void Nhap_ma_tran (int ma_tran[][100], int so_hang, int so_cot); // Nh?p ma tr?n
int lua_chon_4();// l?a ch?n c?a bài 4
void menu_4(int chon, int ma_tran[][100], int so_hang, int so_cot); // menu c?a bài 4
void Xuat_ma_tran (int ma_tran[][100], int so_hang, int so_cot); // Xu?t ma tr?n
int max_ma_tran(int ma_tran[][100], int so_hang, int so_cot); // Tìm ph?n t? l?n nh?t trong ma tr?n
void xuat_max_dong(int ma_tran[][100], int so_hang, int so_cot); // Tìm ph?n t? l?n nh?t trong các dòng


int main(){
    menu(lua_chon());
    return 0;
}

int lua_chon(){
    int chon;
    cout << "CHUONG TRINH GIAI TOAN!\n"
         << "Nhan phim 1 de lam bai 1.\n"
         << "Nhan phim 2 de lam bai 2.\n"
         << "Nhan phim 3 de lam bai 3.\n"
         << "Nhan phim 4 de lam bai 4.\n"
         << "Nhan cac phim khac de thoat.\n";
    cout << "Lua chon cua ban la: ";
    cin >> chon;
    return chon;
}

void menu(int chon){
    switch (chon){
    case 1:{
        giaibai1();
        break;
    }
    case 2:{
        giaibai2();
        break;
    }
    case 3:{
        giaibai3();
        break;
    }
    case 4:{
        giaibai4();
        break;
    }
    default:
        break;
    }
}

void giaibai1(){
    cout << "Xet mang:\n";
    int number_of_element;
    cout << "Nhap so phan tu: ";
    cin >> number_of_element;
    float ar[number_of_element], sub_ar[number_of_element - 1];
    nhap_mang(ar, number_of_element);
    make_sub_ar(ar, sub_ar, number_of_element);
    if (is_sorted(sub_ar, number_of_element) == false){
        cout << "Mang chua duoc sap xep, sap xep mang tang dan.\n";
        cout << "Mang sau sap xep:\n";
        sort_ar(ar, number_of_element);
        xuat_mang(ar, number_of_element);
    }
    else{
        if (is_strictly_sort(sub_ar, number_of_element)){
            if (sub_ar[0] < 0){
                cout << "Mang tang ngat.";
            }
            else{
                cout << "Mang giam ngat.";
            }
        }
        else{
            if (sub_ar[0] == sub_ar[number_of_element] && sub_ar[number_of_element] == 0){
                cout << "Mang khong co thay doi";
            }
            else if (sub_ar[0] < 0 || sub_ar[number_of_element - 1] < 0){
                cout << "Mang tang.";
            }
            else{
                cout << "Mang giam.";
            }
        }
    }
    
}

void nhap_mang(float ar[], int number_of_element){
    cout << "Nhap mang " << number_of_element << " phan tu:\n";
    for (int i = 0; i < number_of_element; i++){
        cout << "Nhap phan tu thu " << i + 1 << ":";
        cin >> ar[i];
    }
}

void xuat_mang(float ar[], int number_of_element){
    for (int i = 0; i < number_of_element; i++){
        cout << ar[i] << "\t";
    }
}

void make_sub_ar(float ar[], float sub_ar[], int number_of_element){
    for (int i = 0; i < number_of_element - 1; i++){
        sub_ar[i] = ar[i + 1] - ar[i];
    }
}

bool is_sorted(float sub_ar[], int number_of_element){
    for (int i = 1; i < number_of_element - 1; i++){
        if ( (sub_ar[0] * sub_ar[i]) < 0){
            return false;
        }
    }
    return true;
}

bool is_strictly_sort(float sub_ar[], int number_of_element){
    for (int i = 0; i < number_of_element - 1; i++){
        if (sub_ar[i] == 0){
            return false;
        }
    }
    return true;
}

void swap(float &a, float &b){
    float c = a;
    a = b;
    b = c;
}

void sort_ar(float ar[], int number_of_element){
    for (int i = 0; i < number_of_element - 1; i++){
        for (int j = i + 1; j < number_of_element; j++){
            if (ar[i] > ar[j]){
                swap( ar[i], ar[j] );
            }
        }
    }
}

void giaibai2(){
    cout << "Sap xep tron tang dan 2 mang:\n";
    int number_of_element_of_first_array, number_of_element_of_second_array;
    cout << "Nhap so phan tu cua mang 1:";
    cin >> number_of_element_of_first_array;
    float first_array [number_of_element_of_first_array];
    nhap_mang(first_array, number_of_element_of_first_array);
    cout << "Nhap so phan tu cua mang 2:";
    cin >> number_of_element_of_second_array;
    float second_array[number_of_element_of_second_array];
    nhap_mang(second_array, number_of_element_of_second_array);
    float ar[number_of_element_of_first_array + number_of_element_of_second_array];
    cout << "2 mang sau khi tron:\n";
    Merge_sort(first_array, second_array, ar, number_of_element_of_first_array, number_of_element_of_second_array);
    xuat_mang(ar, number_of_element_of_first_array + number_of_element_of_second_array);
}

void Merge_sort(float first_array[], float second_array[], float arr[], int number_of_element_of_first_array, int number_of_element_of_second_array){
    int j = 0, k = 0, i = 0;
    for ( ; j < number_of_element_of_first_array && k < number_of_element_of_second_array; i++){
        if (first_array[j] < second_array[k]){
            arr[i] = first_array[j];
            j++;
        }
        else{
            arr[i] = second_array[k];
            k++;
        }
    }
   
    for ( ; j < number_of_element_of_first_array; j++){
        arr[i] = first_array[j];
        i++;
    }
    for ( ; k < number_of_element_of_second_array; k++){
        arr[i] = second_array[k];
        i++;
    }
}

void giaibai3(){
    cout << "Quan ly hoc sinh:\n";
    int so_hoc_sinh;
    cout << "Nhap so luong hoc sinh: ";
    cin >> so_hoc_sinh;
    float hoc_sinh[so_hoc_sinh + 1][4]; // c?t 1 là di?m toán, c?t 2 van, c?t 3 nn, hàng cu?i cùng là d?  luu di?m trung bình các môn 
    Nhap_diem(hoc_sinh, so_hoc_sinh);
    menu_3(lua_chon_3(), hoc_sinh, so_hoc_sinh);
}

void Nhap_diem(float diem[][4], int so_hoc_sinh){
    cout << "Nhap diem cho " << so_hoc_sinh << " hoc sinh:\n";
    for (int i = 0; i < so_hoc_sinh; i++){
        cout << "Nhap diem cho hoc sinh thu " << i + 1 << ":\n";
        cout << "Nhap diem toan: ";
        cin >> diem[i][0];
        cout << "Nhap diem van: ";
        cin >> diem[i][1];
        cout << "Nhap diem ngoai ngu: ";
        cin >> diem[i][2];
        diem[i][3] = (diem[i][1] + diem[i][2] + diem[i][0]) / 3;
    }
    
}

int lua_chon_3(){
    int chon;
    cout << "Quan ly hoc sinh:\n";
    cout << "Nhap 1 de xuat diem cac hoc sinh va diem trung binh mon.\n"
         << "Nhap 2 de in ra nhung hoc sinh co diem trung binh cao nhat.\n"
         << "Nhap 3 de tinh trung binh cac mon va trung binh lop.\n"
         << "Nhap 4 de xuat danh sach theo chieu tang dan.\n"
         << "De thoat nhan cac phim khac\n";
    cout << "Lua chon cua ban la: ";
    cin >> chon;
    return chon;
}

void menu_3(int chon, float diem[][4], int so_hoc_sinh ){
    switch (chon){
    case 1:{
        cout << "Xuat danh sach diem cua cac hoc sinh:\n";
        xuat_danh_sach_diem(diem, so_hoc_sinh);
        break;
    }
    case 2:{
        cout << "Xuat ra nhung hoc sinh co diem trung binh cao nhat:\n";
        sap_xep_danh_sach(diem, so_hoc_sinh);
        for (int i = 0; i < so_hoc_sinh; i++){
            if (diem[i][3] < diem[0][3]){
                break;
            }
            cout << "Hoc sinh thu " << i + 1 << "\n";
            cout << "Diem toan: " << diem[i][0] << "\n";
            cout << "Diem van: " << diem[i][1] << "\n";
            cout << "Diem ngoai ngu: " << diem[i][2] << "\n";
            cout << "Diem trung binh: " << diem[i][3] << "\n";
        }
        break;
    }
    case 3:{
        cout << "Tinh trung binh cac mon va trung binh ca lop:\n";
        diem[so_hoc_sinh][0] = diem[so_hoc_sinh][1] = diem[so_hoc_sinh][2] = diem[so_hoc_sinh][3] = 0;
        diem_trung_binh(diem, so_hoc_sinh);
        cout << "Diem trung binh toan: " << diem[so_hoc_sinh][0] << "\n";
        cout << "Diem trung binh van: " << diem[so_hoc_sinh][1] << "\n";
        cout << "Diem trung binh ngoai ngu: " << diem[so_hoc_sinh][2] << "\n";
        cout << "Diem trung binh chung ca lop: " << diem[so_hoc_sinh][3] << "\n";
       
        break;
    }
    case 4:{
        cout << "Sap xep danh sach giam dan:\n";
        sap_xep_danh_sach(diem, so_hoc_sinh);
        cout << "Danh sach sau sap xep:\n";
        xuat_danh_sach_diem(diem, so_hoc_sinh);

        break;
    }
    default:
        break;
    }
}

void sap_xep_danh_sach(float diem[][4], int so_hoc_sinh){
    for (int i = 0; i < so_hoc_sinh - 1; i++){
        for (int j = so_hoc_sinh - 1; i < j; j--){
            if (diem[i][3] < diem[j][3]){
                swap_2( *(diem + i), *(diem + j), 4); 
            }
        }
    }
}

void swap_2(float diem_hoc_sinh_1[], float diem_hoc_sinh_2[], int so_mon){
    for (int i = 0; i < so_mon; i++){
        swap(diem_hoc_sinh_1[i], diem_hoc_sinh_2[i]);
    }
    
}

void diem_trung_binh(float diem[][4], int so_hoc_sinh){
    for (int i = 0; i < so_hoc_sinh; i++){
        diem[so_hoc_sinh][0] += diem[i][0];
        diem[so_hoc_sinh][1] += diem[i][1];
        diem[so_hoc_sinh][2] += diem[i][2];
        diem[so_hoc_sinh][3] += diem[i][3];
    }
    diem[so_hoc_sinh][0] /= so_hoc_sinh;
    diem[so_hoc_sinh][1] /= so_hoc_sinh;
    diem[so_hoc_sinh][2] /= so_hoc_sinh;
    diem[so_hoc_sinh][3] /= so_hoc_sinh;
}

void xuat_danh_sach_diem( float diem[][4], int so_hoc_sinh){
    for (int i = 0; i < so_hoc_sinh; i++){
        cout << "Hoc sinh " << i + 1 << "\n";
        cout << "Diem toan: " << diem[i][0] << "\n";
        cout << "Diem van: " << diem[i][1] << "\n";
        cout << "Diem ngoai ngu: " << diem[i][2] << "\n";
        cout << "Diem trung binh: " << diem[i][3] << "\n";
    }
}

void giaibai4(){
    cout << "Tinh toan ma tran:\n";
    int hang = nhap("hang");
    int cot = nhap("cot");
    int ma_tran[100][100];
    Nhap_ma_tran(ma_tran, hang, cot);
    menu_4(lua_chon_4(), ma_tran, hang, cot);
}

int nhap(char s[]){
    int input;
    cout << "Nhap so " << s << ": ";
    cin >> input;
    return input; 
}

void Nhap_ma_tran (int ma_tran[][100], int so_hang, int so_cot){
    cout << "Nhap ma tran " << so_hang << "x" << so_cot << ":\n";
    for (int i = 0; i < so_hang; i++){
        for (int j = 0; j < so_cot; j++){
            cout << "Nhap A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> ma_tran[i][j];
        }
    }
}

int lua_chon_4(){
    int chon;
    cout << "Xu ly ma tran:\n";
    cout << "Nhap 1 de hien thi ma tran.\n"
         << "Nhap 2 de tim phan tu lon nhat trong ma tran.\n"
         << "Nhap 3 de tim phan tu lon nhat cac dong.\n"
         << "De thoat nhan cac phim khac";
    cout << "Lua chon cua ban la: ";
    cin >> chon;
    return chon;
}

void menu_4(int chon, int ma_tran[][100], int so_hang, int so_cot){
    switch (chon){
    case 1:{
        cout << "Xuat ma tran vua nhap:\n";
        Xuat_ma_tran(ma_tran, so_hang, so_cot);
        break;
    }
    case 2:{
        cout << "Tim phan tu lon nhat trong ma tran:\n";
        cout << "Phan tu lon nhat ma tran la: " << max_ma_tran(ma_tran, so_hang, so_cot);
        break;
    }
    case 3:{
        cout << "Tim phan tu lon nhat cac dong:\n";
        xuat_max_dong(ma_tran, so_hang, so_cot);
        break;
    }
    default:
        break;
    }
}

void Xuat_ma_tran (int ma_tran[][100], int so_hang, int so_cot){
    for (int i = 0; i < so_hang; i++){
        for (int j = 0; j < so_cot; j++){
            cout << ma_tran[i][j] << "\t";
        }
        cout << "\n";
    }
}

int max_ma_tran(int ma_tran[][100], int so_hang, int so_cot){
    int max_el = ma_tran[0][0];
    for (int i = 0; i < so_hang; i++){
        for (int j = 0; j < so_cot; j++){
            if (ma_tran[i][j] > max_el){
                max_el = ma_tran[i][j];
            }
        }
    }
    return max_el;
}

void xuat_max_dong(int ma_tran[][100], int so_hang, int so_cot){
    int max_dong[so_hang];
    for (int i = 0; i < so_hang; i++){
        max_dong[i] = ma_tran[i][0];
        for (int j = 1; j < so_cot; j++){
            if (ma_tran[i][j] > max_dong[i]){
                max_dong[i] = ma_tran[i][j];
            }
        }
    }
    cout << "Phan tu lon nhat moi dong:\n";
    for (int i = 0; i < so_hang; i++){
        cout << max_dong[i] <<"\t";
    }
}

