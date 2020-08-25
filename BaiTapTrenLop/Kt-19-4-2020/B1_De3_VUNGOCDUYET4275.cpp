#include <iostream>
#include <cmath>
using namespace std;

int nhap(){
	int n;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n < 1);
	return n;
}

void nhap_mang(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap phan tu thu " << i+1 << ": ";
		cin >> *(a+i);
	}
}

void xuat_mang(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << *(a+i) << endl;
	}
}

void tinhTbc(int *a, int n){
	int tongLe = 0, dem = 0;
	float tbc = 0;
	for(int i = 0; i < n; i++){
		if(*(a+i) % 2 == 1 && *(a+i) % 3 == 0){
			dem++;
			tongLe += *(a+i);
		}
	}
	if(dem != 0){
		tbc = (float)tongLe / dem;
		cout << "\nTrung binh cong cac phan tu le va chia het cho 3 la: " << tbc << endl;
	}
	else{
		cout << "Mang khong co phan tu le.\n";
	}
}

void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void sort(int *a, int n){
	int dem = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(*(a+i) < *(a+j)){
				swap(*(a+i), *(a+j));
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(*(a+i) > 0){
			dem++;
		}
	}
	for(int i = 0; i < dem - 1; i++){
		for(int j = i + 1; j < dem; j++){
			if(*(a+i) > *(a+j)){
				swap(*(a+i), *(a+j));
			}
		}
	}
	xuat_mang(a, n);
}

int main(){
	int n = nhap();
	int *a = new int[n];
	cout << "Nhap vao mang so nguyen a: \n";
	nhap_mang(a, n);
	cout << "Mang vua nhap: \n";
	xuat_mang(a, n);
	tinhTbc(a, n);
	cout << "Mang sau khi sap xep theo yeu cau: \n";
	sort(a, n);
	return 0;
}


