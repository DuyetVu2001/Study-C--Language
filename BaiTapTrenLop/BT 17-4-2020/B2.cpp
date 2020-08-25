#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int nhap(){
	int n;
	do{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
	}while(n < 1);
	return n;
}

void nhap_arr(int *a, int n){
	cout << "Nhap mang: \n";
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void xuat_arr(int *a, int n){
	for(int i = 0; i < n; i++){
		cout << setw(5) << a[i];
	}
}

void find_min(int *a, int n){
	int min = a[0], index = 0;
	for(int i = 1; i < n; i++){
		if(min > a[i]){
			min = a[i];
			index = i;
		}
	}
	cout << "\nGia tri nho nhat trong mang la: " << min;
	cout << "\nTai vi tri: " << index << endl;
}

void tong(int *a, int n, int x){
	//Tong pt chia het cho x
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % x == 0 && a[i] != 0){
			tong += a[i];
		}
	}
	cout << "Tong cac so chia het cho x la: " << tong << endl;
}

void tbc(int *a, int n, int x){
	//tbc cac gia tri lon hon x trong mang 
	int dem = 0;
	int tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > x) {
			dem++;
			tong += a[i];
		}
	}
	float tbc = 0;
	tbc = (float)tong / dem;
	cout << "TBC cac phan tu lon hon x la: " << tbc << endl;
}

void xoa(int *a, int n, int x){
	//xoa phan tu trung voi gia tri cua x
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			for(int j = i; j < n - 1; j++){
				a[j] = a[j+1];
			}
			i--;
			n--;
		}
	}
	cout << "Mang sau khi xoa pt trung vs x: \n";
	xuat_arr(a, n);
}

void kiem_traX(int *a, int n){
	int x, exist = 0;
	cout << "Nhap x: ";
	cin >> x;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			exist = 1;
		}
	}
	tbc(a, n, x);
	if(exist == 1){
		tong(a, n, x);
		xoa(a, n, x);
	}
	else{
		cout << "Mang a ko chua gia tri x.\n";
	}
}

int main(){
	int n = nhap();
	int *a = new int[n];
	nhap_arr(a, n);
	cout << "Mang vua nhap: \n";
	xuat_arr(a, n);
	find_min(a, n);
	kiem_traX(a, n);
	
	return 0;
}


