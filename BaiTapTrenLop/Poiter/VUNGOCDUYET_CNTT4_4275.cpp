#include <iostream>
#include <cmath>

using namespace std;

int nhap_n(){
	int n;
	do{
		cout << "Nhap n nguyen duong (5 <= n <= 30): ";
		cin >> n;
	}while(n > 30 || n < 5);
	return n;
}

void nhap_mang(int *d, int n){
	cout << "Nhap mang: \n";
	for(int i = 0; i < n; i++){
		cout << "Nhap d[" << i << "]: ";
		cin >> d[i];
	}
}

void xuat_mang(int *d, int n){
	for(int i = 0; i < n; i++){
		cout << d[i] << endl;
	}
}

int nhap_k(int n){
	int k;
	do{
		cout << "Nhap vao so nguyen k (1 <= k <= n): ";
		cin >> k;
	}while(k < 1 || k > n);
}

void chenX(int *d, int &n){
	int k = nhap_k(n);
	int x;
	cout << "Nhap so nguyen x: ";
	cin >> x;
	for(int i = 0; i < n - k; i++){
		d[n - i] = d[n - 1 - i];
	}
	n++;
	d[k] = x;
	cout << "Mang sau khi chen: \n";
	xuat_mang(d, n);
}

void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void sapXep(int *d, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(d[i] > d[j]){
				swap(d[i], d[j]);
			}
		}
	}
	cout << "Mang sau khi sap xep: \n";
	xuat_mang(d, n);
}

int main(){
	int n;
	n = nhap_n();
	int *d = new int[n+1];
	nhap_mang(d, n);
	cout << "Mang vua nhap: \n";
	xuat_mang(d, n);
	chenX(d, n);
	sapXep(d, n);
	return 0;
}


