#include <iostream>
#include <cmath>

using namespace std;

void baiToan1(int n, int &tongChan, int &tongLe);
void baiToan2(int n, int &demNT, int &tongNT);
void baiToan3();
int Factorial(int n);
float cal_sin(float x);
double baiToan4(double x, int n);
void baiToan5(float *x);
void baiToan6(int *a, int n);
void baiToan7(int *a, int n);
int kiemTraSoNT(int k);
void swap(float &a, float &b);
int nhap_n();

int main(){
	int chon = 0;
	int n = 0, tongChan = 0, tongLe = 0;
	int demNT = 0, tongNT = 0;
	double x = 0;
	float z[] = {12.3, -45.4, 12, 15, 10.1, 12.5}; 
	int a[1000];
		
	do{

		cout << "\n\n====== MENU CAC BAI TOAN ======\n";
		cout << "Bam 1: lua chon giai bai toan 1.\n";
		cout << "Bam 2: lua chon giai bai toan 2.\n";
		cout << "Bam 3: lua chon giai bai toan 3.\n";
		cout << "Bam 4: lua chon giai bai toan 4.\n";
		cout << "Bam 5: lua chon giai bai toan 5.\n";
		cout << "Bam 6: lua chon giai bai toan 6.\n";
		cout << "Bam 7: lua chon giai bai toan 7.\n";
		cout << "Bam 0: thoat chuong trinh.\n";
		cout << "Ban chon: ";
		cin >> chon;
				
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				cout << "\nBAI TOAN TINH TONG CAC GIA TRI CHAN, LE TRONG DOAN [1, n].\n\n";
				n = nhap_n();
				baiToan1(n, tongChan, tongLe);
				cout << "Tong chan: " << tongChan << endl;
				cout << "Tong le: " << tongLe << endl;
				break;
			}
			case 2:{
				cout << "\nBAI TOAN TINH TONG VA DEM SO LUONG SO NT TRONG DOAN [1, n].\n\n";
				n = nhap_n();
				baiToan2(n, demNT, tongNT);
				cout << "Tong cac so NT: " << tongNT << endl;
				cout << "So luong so NT: " << demNT << endl;
				break;
			}
			case 3:{
				cout << "\nBAI TOAN TINH sin(x).\n\n";
				baiToan3();
				break;
			}case 4:{
				cout << "\nBAI TOAN TINH GIA TRI f(x, n) = x^n.\n\n";
				cout << "Nhap vao so thuc x: "; cin >> x;
				n = nhap_n();
				cout << "f(x, n) = " << baiToan4(x, n);
				break;
			}case 5:{
				cout << "\nBAI TOAN DAO NGUOC DAY SO X[] = {12.3, -45.4, 12, 15, 10.1, 12.5}\n\n";
				cout << "Sau khi dao nguoc ta co:";
				baiToan5(z);
				break;
			}case 6:{
				cout << "\nBAI TOAN TINH TONG PHAN TU CHAN, LE VA CHIA HET CHO 3.\n\n";
				n = nhap_n();
				baiToan6(a, n);
				break;
			}case 7:{
				cout << "\nBAI TOAN NHAP n PHAN TU TINH TONG SO NT TRONG DAY.\n\n";
				n = nhap_n();
				baiToan7(a, n);
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long chon lai.";
				break;
			}
		}
	}while(chon);
	return 0;
}

int nhap_n(){
	int n;
	do{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
	}while(n < 1);
	return n;
}

void baiToan1(int n, int &tongChan, int &tongLe){
	tongChan = 0;
	tongLe = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			tongChan += i;
		}
		else{
			tongLe += i;
		}
	}	
}

int kiemTraSoNT(int k){
	int i = 2;
	if(k < 2) return 0;
	for(;i <= sqrt(k); i++){
		if(k % i == 0) return 0;
	}
	return 1;
}

void baiToan2(int n, int &demNT, int &tongNT){
	demNT = 0;
	tongNT = 0;
	for(int i = 2; i <= n; i++){
		if(kiemTraSoNT(i)){
			tongNT += i;
			demNT++;
		}
	}
}

void baiToan3(){
    float x;
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
    float epxilon = 0.00001f;

    while (epxilon < ( pow(x, 2 * count + 1) / Factorial(2 * count + 1) )){
        ++count;
    }
    
    for (int i = 0; i <= count; i++){
        sin += ( pow(-1, i) * (pow(x, 2 * i + 1) / Factorial(2 * i + 1)) );
    }
    
    return sin;
}

double baiToan4(double x, int n){
	if(n == 0){
		return 1;
	}
	else{
		return (double)(x * baiToan4(x, n-1));
	}
}

void swap(float &a, float &b){
	float tmp = a;
	a = b;
	b = tmp;
}

void baiToan5(float *x){
	for(int i = 0; i < 6 / 2; i++){
		swap(x[i], x[6 - 1 - i]);
	}
	for(int i = 0; i < 6; i++){
		cout << x[i] << "  ";
	}	
}

void baiToan6(int *a, int n){
	int tongChan = 0, tongLe = 0, tongPtChiaHetCho3 = 0;
	for(int i = 0; i < n; i++){
		cout << "Nhap so nguyen thu " << i + 1 << " : ";
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			tongChan += a[i];
		}
		else{
			tongLe += a[i];
		}
		if(a[i] % 3 == 0){
			tongPtChiaHetCho3 += a[i];
		}
	}
	cout << "\nTong cac phan tu chan la: " << tongChan << endl;
	cout << "\nTong cac phan tu le la: " << tongLe << endl;
	cout << "\nTong cac phan tu chia het cho 3 la: " << tongPtChiaHetCho3 << endl;	
}

void baiToan7(int *a, int n){
	int tongNT = 0;
	for(int i = 0; i < n; i++){
		cout << "Nhap so nguyen thu " << i + 1 << " : ";
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(kiemTraSoNT(a[i])){
			tongNT += a[i];
		}
	}
	cout << "\nTong cac phan tu la so NT la: " << tongNT << endl;	
}
