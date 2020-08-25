#include <iostream>
#include <cmath>

using namespace std;

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
	cout << "NHAP DANH SACH KWH DIEN TIEU CUA MOI HO GIA DINH: \n" << endl;	
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



int main(){
	double a[100], n = 5;
	baiToan4(a, n);
	return 0;
}


