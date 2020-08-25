#include <iostream>
#include <cmath>

using namespace std;

int nhap_n();
long long baiToan1(int n);
void baiToan2(int n);
int baiToan3(int a, int b);
void baiToan4(double *a, int n);
void baiToan4NhapSoDien(double *a, int n);
void baiToan4_1(double *a, int n);
double baiToan4_1TinhTienDien(double n);
void baiToan4_2(double *a, int n);
void baiToan4_3(double *a, int n);
int baiToan5(int n);

int main(){
	int chon, n, a, b;
	double c[1000];// Mang so dien cua moi ho gia dinh.
	
	do{
		
		cout << "\n\n====== MENU CHON BAI TOAN=======\n";
		cout << "Bam 1: Giai bai toan 1." << endl;
		cout << "Bam 2: Giai bai toan 2.\n";
		cout << "Bam 3: Giai bai toan 3.\n";
		cout << "Bam 4: Giai bai toan 4.\n";
		cout << "Bam 5: Giai bai toan 5.\n";
		cout << "Bam 0: Thoat chuong trinh.\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				cout << "\nBAI TOAN TINH n!\n\n";
				cout << "Nhap vao so nguyen duong n: ";
				n = nhap_n();
				cout << "Giai thua cua " << n << "la: " << baiToan1(n);
				break;
			}
			case 2:{
				cout << "\nBAI TOAN NHAP n TINH GIA TRI CUA BIEU THUC F.\n\n";
				cout << "Nhap vao so nguyen duong n: ";
				n = nhap_n();
				baiToan2(n);
				break;
			}
			case 3:{
				cout << "\nBAI TOAN TIM UOC SO CHUNG CUA HAI SO NGUYEN a, b (a > b).\n\n";
				cout << "Nhap vao so nguyen duong a: ";
				a = nhap_n();
				cout << "Nhap vao so nguyen duong b: ";
				b = nhap_n();
				if(a <= b) cout << "Khong thoa man yeu cau.";
				else
					cout << "UCLN = " << baiToan3(a, b);
				break;
			}
			case 4:{
				cout << "\nBAI TOAN VE TIEN DIEN CUA MOI HO GIA DINH.\n\n";
				cout << "Nhap vao so ho gia dinh n: ";
				n = nhap_n();
				baiToan4(c, n);
				break;
			}
			case 5:{
				cout << "\nDEM SO CHU SO CUA n.\n\n";
				cout << "Nhap vao so nguyen duong n: ";
				n = nhap_n();
				cout << "So chu so cua n la: " << baiToan5(n);				
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long chon lai.\n";
				break;
			}
		}
	}while(chon);
	return 0;
}

int nhap_n(){
	int n;
	do{
		cin >> n;
	}while(n < 1);
	return n;
}

long long baiToan1(int n){
	if(n == 1 || n == 0){
		return 1;		
	}
	else{
		return n * baiToan1(n - 1);
	}
}

void baiToan2(int n){
	float sum = 0;
	if(n % 2 == 0){	
		for(size_t i = 0; i <= n; i++){
			sum +=(float) 1/pow(2, i);
		}
	}
	else{
		sum =(float) sqrt(n*n + 1);
	}	
	cout << "F = " << sum << endl;
}

int baiToan3(int a, int b){
	int r = a % b;
	if(r == 0){
		return b;
	}
	else{
		a = b;
		b = r;
		return baiToan3(a, b);
	}	
}

void baiToan4(double *a, int n){
	baiToan4NhapSoDien(a, n);
	int chon = 0;
	do{
		cout << "\n======== MENU TIEN DIEN========\n\n" << endl;
		cout << "Bam 1: Hien thi so kwh dien tieu thu va so tien phai tra moi ho." << endl;
		cout << "Bam 2: Hien thi ho gia dinh phai tra it tien nhat va so tien." << endl;
		cout << "Bam 3: Sap xep tang dan luong tieu thu dien va so tien." << endl;
		cout << "Bam 0: Ket thuc MENU TIEN DIEN." << endl;
		cout << "Moi ban chon: ";
		cin >> chon;
		switch(chon){
			case 0:{
				
				break;
			}
			case 1:{
				baiToan4_1(a, n);
				break;
			}
			case 2:{
				baiToan4_2(a, n);
				break;
			}
			case 3:{
				baiToan4_3(a, n);
				break;
			}
			default:{
				cout << "Sai gia tri! Vui long nhap lai." << endl;
				break;
			}
		}
	}while(chon);	
}

void baiToan4NhapSoDien(double *a, int n){
	cout << "\nNHAP VAO SO KWH DIEN TIEU THU CUA MOI HO GIA DINH: \n" << endl;	
	for(size_t i = 0; i < n; i++){
		cout << "Ho gia dinh " << i + 1 << ": ";
		cin >> a[i];
	}
}

void baiToan4_1(double *a, int n){
	cout << "DANH SACH TIEN DIEN PHAI TRA CUA MOI HO (4K / KWH)." << endl << endl;
	for(size_t i = 0; i < n; i++){
		cout << "Ho gia dinh " << i + 1 << " phai tra: " << baiToan4_1TinhTienDien(a[i]) << " VND" << endl;
	}
	
	
}

double baiToan4_1TinhTienDien(double n){
	double t = 0;
	if(n <= 50) 
		t = n * 1678;
	else if(n > 51 && n < 101) 
		t = 50 * 1678 + (n - 50) * 1734;
	else if(n > 100 && n < 201)
		t = 50 * 1678 + 50 * 1734 + (n - 100) * 2014;
	else if(n > 200 && n < 301) 
		t = 50 * 1678 + 50 * 1734 + 100 * 2014 + (n - 200) * 2536;
	else if(n > 300 & n < 401)
		t = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (n - 300) * 2834;
	else
		t = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 1927 + (n - 400) * 2927;
	return t;	
}

void baiToan4_2(double *a, int n){
	double min = a[0], index = 0;
	
	for(size_t i = 1; i < n; i++){
		if(a[i] < min){
			min = a[i];
			index = i;
		}		
	}
	cout << "Ho gia dinh " <<   index + 1 << " co so tien dien it nha la: " << baiToan4_1TinhTienDien(min) << endl;
}

void baiToan4_3(double *a, int n){
	double tmp = 0;
	for(size_t i = 0; i < n - 1; i++){
		for(size_t j = i + 1; j < n; j++){
			if(a[i] > a[j]){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			}
		}			
	}
	cout << "\nDANH SANH TIEN DIEN SAP XEP TANG DAN LA: \n\n";
	for(size_t i = 0; i < n; i++){
		cout << a[i] << " kwh thanh tien: " << baiToan4_1TinhTienDien(a[i]) << endl;
	}
}

int baiToan5(int n){
	if(n > 0 && n < 10)
		return 1;
	else
		return 1 + baiToan5(n / 10);
}
