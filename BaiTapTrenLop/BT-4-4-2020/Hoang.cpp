#include <iostream>
#include <cmath>

#define epxilon 0.00001

using namespace std;

int lua_chon();
void menu(int chon);
void giai_bai1();
void giai_bai2();
void giai_bai3();
void giai_bai4();
void giai_bai5();
void giai_bai6();
void giai_bai7();
int odd_sum(int n);
int even_sum(int n);
bool is_Prime_Number(int n);
int Prime_number_sum(int n);
int counting_Prime_number(int n);
int Factorial(int n);
float exponential(float x, int n);
void display_array(float ar[], int number_of_element);
void reverser_array(float ar[], int number_of_element);
void swap(float &a, float &b);
void input_array(int ar[], int number_of_element);
int even_elment_sum(int ar[], int number_of_element);
int odd_elment_sum(int ar[], int number_of_element);
int divisor_of_3_elment_sum(int ar[], int number_of_element);
int Prime_number_element_sum(int ar[], int number_of_element);

int main(){
    menu(lua_chon());
    return 0;
}

int lua_chon(){
    int chon;
    cout << "Menu chuong trinh"
         << "Nhan 1 de giai bai 1.\n"
         << "Nhan 2 de giai bai 2.\n"
         << "Nhan 3 de giai bai 3.\n"
         << "Nhan 4 de giai bai 4.\n"
         << "Nhan 5 de giai bai 5.\n"
         << "Nhan 6 de giai bai 6.\n"
         << "Nhan 7 de giai bai 7.\n"
         << "Nhan 0 de thoat chuong trinh.\n";
    cout << "Lua chon cua ban la: ";
    cin >> chon;
}

void menu(int chon){
    switch (chon){
    case 0: {
        cout << "Thoat chuong trinh";
        break;
    }
    case 1:{
        giai_bai1();
        break;
    }
    case 2:{
        giai_bai2();
        break;
    }
    case 3:{
        giai_bai3();
        break;
    }
    case 4:{
        giai_bai4();
        break;
    }
    case 5:{
        giai_bai5();
        break;
    }
    case 6:{
        giai_bai6();
        break;
    }
    case 7:{
        giai_bai7();
        break;
    }
    default:
        cout << "Lua chon khong thich hop!";
        break;
    }
}

void giai_bai1(){
    int n;
    cout << "Chuong trinh tinh tong cac so chan, le trong doan [1,n]\n";
    do{
        cout << "Nhap n >= 1: ";
        cin >> n;
    } while (n < 1);
    cout << "Tong cac so chan trong [1,n]: " << even_sum(n) << "\n"; 
    cout << "Tong cac so le trong [1,n]: " << odd_sum(n) << "\n";
}

int odd_sum(int n){
    int od_sum = 0;
    for (int i = 1; i <= n; i+= 2){
        od_sum += i;
    }
    return od_sum;
}

int even_sum(int n){
    int ev_sum = 0;
    for (int i = 2; i <= n; i+= 2){
        ev_sum += i;
    }
    return ev_sum;
}

void giai_bai2(){
    int n;
    cout << "Chuong trinh dem va tinh tong cac so nguyen to trong [1, n]:\n";
    do{
        cout << "Nhap n >= 1: ";
        cin >> n;
    } while (n < 1);
    cout << "Tông cac so nguyen to trong [1,n]: " << Prime_number_sum(n) << "\n";
    cout << "So so nguyen to trong [1,n]: " << counting_Prime_number(n) << "\n";
}

bool is_Prime_Number(int n){
    if (n < 2){
        return false;
    }
    int gioi_han = sqrt(n);
    for (int i = 2; i <= gioi_han; i++){
        if ( 0 == ( n % i )){
            return false;
        }
    }
    return true;
}

int Prime_number_sum(int n){
    int PriNumSum = 0;
    for (int i = 2; i <= n; i++){
        if (is_Prime_Number(i)){
            PriNumSum += i;
        }
    }
    return PriNumSum;
}

int counting_Prime_number(int n){
    int count = 0;
    for (int i = 2; i <= n; i++){
        if (is_Prime_Number(i)){
            count++;
        }
    }
    return count;
}

void giai_bai3(){
    float x;
    cout << "Chuong trinh tinh sin(x):\n";
    cout << "Nhap x: ";
    cin >> x;
    cout.precision(4);
    cout << fixed << "Sin(x) = " << cal_sin(x);
}

int Factorial(int n){
    int Fac = 1;
    for (int i = 2; i <= n; i++){
        Fac *= i;
    }
    return Fac;
}

float cal_sin(float x){
    float sin = 0;
    int count = 0;

    while (epxilon < ( pow(x, 2 * count + 1) / Factorial(2 * count + 1) )){
        ++count;
    }
    
    for (int i = 0; i <= count; i++){
        sin += ( pow(-1, i) * (pow(x, 2 * i + 1) / Factorial(2 * i + 1)) );
    }
    
    return sin;
}

void giai_bai4(){
    float x;
    int n;
    cout << "Chuong trinh tinh f(x) = x ^ n:\n";
    cout << "Nhap x, n: ";
    cin >> x >> n;
    cout.precision(3);
    cout << fixed << "f(x) = " << exponential(x, n);
}

float exponential(float x, int n){
    if (0 == n){
        return 1;
    }
    return x * exponential(x, n - 1);
}

void giai_bai5(){
    float ar[] = { 12.3, -45.4, 12, 15, 10.1, 12.5};
    int numOfEl = sizeof(ar) / sizeof(float);

    cout << "Chuong trinh dao nguoc day so:\n";
    cout << "Day so truoc khi dao:\n";
    display_array(ar, numOfEl);
    cout << "\nDay sau khi dao:\n";
    reverser_array(ar, numOfEl);
    display_array(ar, numOfEl);
}

void display_array(float ar[], int number_of_element){
    for (int i = 0; i < number_of_element; i++){
        cout << ar[i] << "\t";
    }
}

void reverser_array(float ar[], int number_of_element){
    for (int i = 0, j = number_of_element - 1; i < j; i++, j--){
        swap(ar[i], ar[j]);
    }
}

void swap(float &a, float &b){
    float c = a;
    a = b;
    b = c;
}

void giai_bai6(){
    int numOfEl;
    cout << "Chuong trinh tinh tong cac phan tu chan, le va chia het cho 3:\n";
    cout << "Nhap so phan tu cua mang: ";
    cin >> numOfEl;
    int ar[numOfEl];
    input_array(ar, numOfEl);
    cout << "Tong cac so chan: " << even_elment_sum(ar, numOfEl) << "\n";
    cout << "Tong cac so le: " << odd_elment_sum(ar, numOfEl) << "\n";
    cout << "Tong cac so chia het cho 3: " << divisor_of_3_elment_sum(ar, numOfEl) << "\n";
}

void input_array(int ar[], int number_of_element){
    cout << "Nhap mang " << number_of_element << " so nguyen:\n";
    for (int i = 0; i < number_of_element; i++){
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> ar[i];
    }
}

int even_elment_sum(int ar[], int number_of_element){
    int sum = 0;
    for (int i = 0; i < number_of_element; i++){
        if (ar[i] % 2 == 0)
            sum += ar[i];
    }
    return sum;
}

int odd_elment_sum(int ar[], int number_of_element){
    int sum = 0;
    for (int i = 0; i < number_of_element; i++){
        if (ar[i] % 2 == 1)
            sum += ar[i];
    }
    return sum;
}

int divisor_of_3_elment_sum(int ar[], int number_of_element){
    int sum = 0;
    for (int i = 0; i < number_of_element; i++){
        if (ar[i] % 3 == 0)
            sum += ar[i];
    }
    return sum;
}

void giai_bai7(){
    int numOfEle;
    cout << "Chuong trinh tinh tong cac so nguyen to trong mang:\n";
    cout << "Nhap so phan tu: ";
    cin >> numOfEle;
    int ar[numOfEle];
    input_array(ar, numOfEle);
    cout << "Tong cac so nguyen to trong day: " << Prime_number_element_sum(ar, numOfEle);
}

int Prime_number_element_sum(int ar[], int number_of_element){
    int sum = 0;
    for (int i = 0; i < number_of_element; i++){
        if (is_Prime_Number(ar[i])){
            sum += ar[i];
        }
    }
    return sum;
}
